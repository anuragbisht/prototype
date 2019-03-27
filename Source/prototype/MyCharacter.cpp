// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// set size for collisuion capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);

	//set the turn rates for input 
	baseTurnRate = 45.f;
	baseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just effect the camera
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	//configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true;  //character moves in the direction of the input 
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);// ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;

	//create a camera boom (pulls in towards the player if there is a collision )
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f;// camera follows at this distance behind the character
	CameraBoom->bUsePawnControlRotation = false;// rotate the arm based on the controller

	//create Follow camera 
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); //attach the camera to the end of the boom and let the boom adjust to mactch the controller orientation.
	FollowCamera->bUsePawnControlRotation = false;//camera does not rotate  relative to arm 

	//Note: The skeletal Mesh and Anim Blue Print refrences on the mesh component (inherited from the character class)
	//are setup in the derived blue print asset named MyCharacter(to avoid direct content refrencing in C++)


	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//<--------------------------Input------------------------->
// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{

	
	//setup gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);



	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

