#pragma once

#include "sfse/GameTypes.h"
#include "sfse_common/Utilities.h"

class Actor;
struct BGSHotloadCompletedEvent {};

// BSTGlobalEvent

struct SnapTemplateUtils
{
    struct SnapReplaceEvent {};
};
struct ImageFixtureEvent_RequestImage {};
struct ImageFixtureEvent_UnregisterImage {};
struct Spaceship
{
    struct TakeOffEvent {};
    struct PlayerMovementOutputEvent {};
    struct GravJumpEvent {};
    struct LandedSetEvent {};
    struct BoughtEvent {};
    struct ContrabandScanWarningEvent {};
    struct DockEvent {};
    struct DynamicNavmeshCompleted {};
    struct FarTravelEvent {};
    struct LandingEvent {};
    struct PlanetScanEvent {};
    struct RampDownEvent {};
    struct RefueledEvent {};
    struct RegisteredEvent {};
    struct ShieldEvent {};
    struct ShipAddedEvent {};
    struct ShipCollisionEvent {};
    struct ShipCustomizedEvent {};
    struct SoldEvent {};
    struct SystemDamagedEvent {};
    struct SystemPowerAllocationEvent {};
    struct SystemPowerChangeEvent {};
    struct SystemRepairedBIEvent {};
    struct SystemRepairedEvent {};
    struct TakeDamagEvent {};
};
struct HUDActivityIncreaseEvent {};
struct AnimationDataCleanupEvent {};
struct AnimationDataSetupEvent {};
struct EndLoadGameEvent {};
struct StartLoadGameEvent {};
struct ShipEditor_SystemSelected {};
struct ShipEditor_PreviewUpgrade {};
struct ShipEditor_SelectedUpgrade {};
struct RuntimeComponentDBFactory
{
    struct ReferenceAttach {};
    struct ReferenceDetach {};
    struct ReferenceCleared3d {};
    struct ReferenceDestroy {};
    struct ReferenceInit {};
    struct ReferenceRecycle {};
    struct ReferenceSet3d {};
    struct Release3DRelatedData {};
};
struct WeaponGroupAssignmentMenu_ChangeWeaponAssignment {};
struct WeaponGroupAssignmentMenu_OnHintButtonActivated {};
struct ShipEditor_OnExitConfirmCancel {};
struct ShipEditor_OnExitConfirmExit {};
struct ShipEditor_OnExitConfirmSaveAndExit {};
struct ShipEditor_OnFlightCheckTabChanged {};
struct ShipEditor_OnWeaponGroupChanged {};
struct ShipEditor_OnRenameEndEditText {};
struct ShipEditor_OnRenameInputCancelled {};
struct ShipEditor_ChangeModuleCategory {};
struct ShipEditor_PreviewShipPart {};
struct ShipEditor_SelectedShipPart {};
struct ShipEditor_OnColorPickerControlChanged {};
struct ShipEditor_OnColorPickerTabChanged {};
struct ShipEditor_OnColorSliderMouseInput {};
struct ShipEditor_OnRecentColorSwatchClicked {};
struct ShipBuilder_CloseAllMenus {};
struct ShipEditor_OnHintButtonActivated {};
struct ShipEditor_RemoveAll3D {};
struct ReferenceQueuedEvent {};
struct LoadScreenEndEvent {};
struct LoadScreenStartEvent {};
struct CellAttachDetachEvent {};
struct PickRefStateChangedEvent {};
struct ActivityTrackerActivityStartedEvent {};
struct BSWorldOriginShiftEvent {};
struct BGSPlanet
{
    struct PlayerKnowledgeFlagSetEvent {};
};
struct StarMap
{
    struct PlanetTraitKnownEvent {};
};
struct ResetHistoryDataEvent {};
struct TESQuestRewardEvent {};
struct HUDWeaponWorldFOVMultChangedEvent {};
struct BGSSceneActionPlayerDialogue
{
    struct ActionEndEvent {};
    struct ActionStartEvent {};
};

struct AutoLoadDoorRolloverEvent {};
struct ClearQuickContainerEvent {};
struct ReferenceCellLoadedTemps {};
struct Workshop
{
    struct CargoLinkAddedEvent {};
    struct CargoLinkTargetChangedEvent {};
    struct EnterOutpostBeaconModeEvent {};
    struct ItemGrabbedEvent {};
    struct ItemMovedEvent {};
    struct ItemPlacedEvent {};
    struct ItemProducedEvent {};
    struct ItemRemovedEvent {};
    struct ItemRepairedEvent {};
    struct ItemScrappedEvent {};
    struct OutpostNameChangedEvent {};
    struct OutpostPlacedEvent {};
    struct PlacementStatusEvent {};
    struct PowerOffEvent {};
    struct PowerOnEvent {};
    struct SnapBehaviorCycledEvent {};
    struct WorkshopFlyCameraEvent {};
    struct WorkshopItemPlacedEvent {};
    struct WorkshopModeEvent {};
    struct WorkshopOutputLinkEvent {};
    struct WorkshopStatsChangedEvent {};
    struct WorkshopUpdateStatsEvent {};
};

struct PickRefUpdateEvent {};

struct ShipCameraStateToggled {};
struct PlayerControls
{
    struct PlayerJumpPressEvent {};
    struct PlayerJumpReleaseEvent {};
    struct PlayerZeroGSprintJustPressedEvent {};
    struct PlayerZeroGSprintReleasedEvent {};
    struct PlayerIronSightsEndEvent {};
    struct PlayerIronSightsStartEvent {};
};
struct PlayerSneakingChangeEvent {};
struct SaveLoadEvent {};
struct SpaceshipWeaponBinding
{
    struct SpaceshipWeaponBindingChangedEvent {};
};
struct BoundaryMenu_FastTravel {};
struct BoundaryMenu_ShowMap {};
struct PhotoGallery_DeletePhoto {};
struct PowersMenu_ActivateEssence {};
struct PowersMenu_EquipPower {};
struct PowersMenu_FavoritePower {};
struct ContainerMenuClosed
{
    struct Event {};
};
struct HangarShipSelection_ChangeSystemDisplay {};
struct HangarShipSelection_RepairShip {};
struct HangarShipSelection_UpgradeSystem {};
struct ShipCrewMenu_Close {};
struct BinkMovieStoppedPlayingEvent {};
struct WorkshopColorMode_ApplyColors {};
struct WorkshopColorMode_SelectedTab {};
struct WorkshopColorMode_SliderChanged {};
struct WorkshopColorMode_SwatchChanged {};
struct HUDCrewBuffMessageEvent {};
struct CraftingMenu_SessionSummaryEvent {};
struct CraftingMenu_CraftItem {};
struct CraftingMenu_ExitBench {};
struct CraftingMenu_InstallMod {};
struct CraftingMenu_RenameItem {};
struct CraftingMenu_RevertedModdedItem {};
struct CraftingMenu_SelectedMod {};
struct CraftingMenu_SelectedModSlot {};
struct CraftingMenu_SelectedModdableItem {};
struct CraftingMenu_SelectedRecipe {};
struct CraftingMenu_SetInspectControls {};
struct CraftingMenu_ToggleTracking {};
struct CraftingMenu_ViewingModdableItem {};
struct ContainerMenu_CloseMenu {};
struct InventoryMenu_Change3DView {};
struct InventoryMenu_PaperDollTryOn {};
struct InventoryMenu_ResetPaperDollInv {};
struct UpdateActivateListenerEvent {};
struct StartOutpostFromListenerEvent {};
struct HUDModeEvent {};
struct OpenContainerMenuEventData {};
struct OpenContainerMenuFromListenerEvent {};
struct HUDRolloverActivationButtonEvent {};
struct HUDRolloverActivationQCItemPressEvent {};
struct Inventory_SetSort {};
struct ShowingQuestMarketTextEvent {};
struct TargetHitEvent {};
struct PlayerCrosshairModeEvent {};
struct ClearHUDMessagesEvent {};
struct ShowHUDMessageEvent {};
struct PlayerDetectionLevelChangeEvent {};
struct ShowCustomWatchAlert {};
struct PlayerUpdateEvent {};
struct InventoryMenu_ToggleHelmet {};
struct InventoryMenu_ToggleSuit {};
struct ControlsRemappedEvent {};
struct SettingsPanel_CheckBoxChanged {};
struct SettingsPanel_ClearBinding {};
struct SettingsPanel_OpenCategory {};
struct SettingsPanel_OpenSettings {};
struct SettingsPanel_RemapConfirmed {};
struct SettingsPanel_RemapMode {};
struct SettingsPanel_ResetToDefaults {};
struct SettingsPanel_SaveControls {};
struct SettingsPanel_SaveSettings {};
struct SettingsPanel_SliderChanged {};
struct SettingsPanel_StepperChanged {};
struct SettingsPanel_ValidateControls {};
struct ShipCrewMenu_OpenAssignMenu {};
struct ShipCrewMenu_SetSort {};
struct ShowLongShipBootup {};
struct ShipHudQuickContainer_TransferMenu {};
struct ShipHud_Activate {};
struct ShipHud_BodyViewMarkerDimensions {};
struct ShipHud_ChangeComponentSelection {};
struct ShipHud_CloseMenu {};
struct ShipHud_Deselect {};
struct ShipHud_FarTravel {};
struct ShipHud_HailAccepted {};
struct ShipHud_HailCancelled {};
struct ShipHud_JumpToQuestMarker {};
struct ShipHud_Land {};
struct ShipHud_LandingMarkerMap {};
struct ShipHud_Map {};
struct ShipHud_OnMonocleToggle {};
struct ShipHud_OpenPhotoMode {};
struct ShipHud_Repair {};
struct ShipHud_SetTargetMode {};
struct ShipHud_Target {};
struct ShipHud_TargetShipSystem {};
struct ShipHud_UntargetShipSystem {};
struct ShipHud_UpdateComponentPower {};
struct DialogueMenu_CompleteExit {};
struct BGSScannerGuideEffectStatusUpdateEvent {};
struct GlobalFunc_CloseAllMenus {};
struct GlobalFunc_CloseMenu {};
struct GlobalFunc_PlayMenuSound {};
struct GlobalFunc_StartGameRender {};
struct GlobalFunc_UserEvent {};
struct ExperienceMeterDisplayData {};
struct LevelUp_AnimFinished {};
struct LevelUp_OnWidgetShown {};
struct LevelUp_OpenDataMenu {};
struct LevelUp_ShowSkills {};
struct LocationTextWidget_FinishedQueue {};
struct DisplayFatigueWarningEvent {};
struct SaveLoadMessageStringEvent {};
struct HUDNotificationEvent {};
struct HUDNotification_MissionActiveWidgetUpdate {};
struct HUDNotification_OpenDataMenu {};
struct HUDNotification_OpenMissionMenu {};
struct HUDNotification_SetMissionActive {};
struct PlayerSetWeaponStateEvent {};
struct BarterMenu_BuyItem {};
struct BarterMenu_CloseMenu {};
struct BarterMenu_HideModel {};
struct BarterMenu_LoadModel {};
struct BarterMenu_SellItem {};
struct BarterMenu_SetMouseOverModel {};
struct BarterMenu_ShowFailureMessage {};
struct BarterMenu_ViewedItem {};
struct MissionMenu_ClearState {};
struct MissionMenu_PlotToLocation {};
struct MissionMenu_RejectQuest {};
struct MissionMenu_SaveCategoryIndex {};
struct MissionMenu_SaveOpenedId {};
struct MissionMenu_ShowItemLocation {};
struct MissionMenu_ToggleTrackingQuest {};
struct DataSlateButtons_acceptClicked {};
struct DataSlateButtons_cancelClicked {};
struct DataSlateMenu_playSFX {};
struct DataSlateMenu_toggleAudio {};
struct InventoryMenu_DropItem {};
struct InventoryMenu_HideModel {};
struct InventoryMenu_LoadModel {};
struct InventoryMenu_OnEnterCategory {};
struct InventoryMenu_OpenCargoHold {};
struct InventoryMenu_SelectItem {};
struct InventoryMenu_SetMouseOverModel {};
struct InventoryMenu_ToggleFavorite {};
struct MissionBoard_MissionEntryChanged {};
struct MissionBoard_MissionEntryPressed {};
struct MonocleMenu_Bioscan {};
struct MonocleMenu_FastTravel {};
struct MonocleMenu_Harvest {};
struct MonocleMenu_Initialize {};
struct MonocleMenu_Outpost {};
struct MonocleMenu_PhotoMode {};
struct MonocleMenu_Shutdown {};
struct MonocleMenu_SocialSpell {};
struct MonocleMenu_StartContainerView {};
struct MonocleMenu_StopContainerView {};
struct MonocleMenu_SurfaceMap {};
struct MonocleMenu_UseListScrollControls {};
struct MonocleMenu_ZoomIn {};
struct MonocleMenu_ZoomOut {};
struct PhotoMode_InitializeCategory {};
struct PhotoMode_ResetToDefaults {};
struct PhotoMode_SliderChanged {};
struct PhotoMode_StepperChanged {};
struct PhotoMode_TakeSnapshot {};
struct PhotoMode_ToggleHelmet {};
struct PhotoMode_ToggleUI {};
struct PickpocketMenu_OnItemSelect {};
struct ResearchMenu_AddMaterial {};
struct ResearchMenu_CategorySelected {};
struct ResearchMenu_ExitMenu {};
struct ResearchMenu_HideModel {};
struct ResearchMenu_PreviewProject {};
struct ResearchMenu_ProjectViewed {};
struct ResearchMenu_SetInspectControls {};
struct ResearchMenu_ToggleTrackingProject {};
struct UnlockedTerminalElementEvent {};
struct SecurityMenu_BackOutKey {};
struct SecurityMenu_CloseMenu {};
struct SecurityMenu_ConfirmExit {};
struct SecurityMenu_EliminateUnusedKeys {};
struct SecurityMenu_GetRingHint {};
struct SecurityMenu_SelectNewKey {};
struct SecurityMenu_TryUseKey {};
struct ShipCrewAssignMenu_Assign {};
struct ShipCrewAssignMenu_Unassign {};
struct ShipCrewMenu_ViewedItem {};
struct Refuel_Accept {};
struct Refuel_Cancel {};
struct SkillsMenu_Accept {};
struct SkillsMenu_AddPatch {};
struct SkillsMenu_Cancel {};
struct SkillsMenu_ChangeCursorVisibility {};
struct SkillsMenu_SaveLastCategory {};
struct BSChargenAPI
{
    struct BIDataUtils
    {
        struct MenuClosedEvent {};
        struct PresetNPCChangedEvent {};
    };
};
struct CharGen_BrowChange {};
struct CharGen_BrowColorChange {};
struct CharGen_CancelTextEntry {};
struct CharGen_CloseMenu {};
struct CharGen_CyclePronoun {};
struct CharGen_DirtScarsEtcChange {};
struct CharGen_EndBodyChange {};
struct CharGen_EndTextEntry {};
struct CharGen_EyeColorChange {};
struct CharGen_FacialHairChange {};
struct CharGen_FacialHairColorChange {};
struct CharGen_HairChange {};
struct CharGen_HairColorChange {};
struct CharGen_HeadpartPlusSelectorChange {};
struct CharGen_HeadpartPresetChange {};
struct CharGen_JewelryChange {};
struct CharGen_JewelryColorChange {};
struct CharGen_MakeupChange {};
struct CharGen_MarkingsChange {};
struct CharGen_PostBlendColorOptionChange {};
struct CharGen_PostBlendFaceChange {};
struct CharGen_PostBlendIntensityChange {};
struct CharGen_PresetChange {};
struct CharGen_RollOffLocomotion {};
struct CharGen_RollOnLocomotion {};
struct CharGen_RotatePaperdoll {};
struct CharGen_SetAdditionalSlider {};
struct CharGen_SetBackground {};
struct CharGen_SetBlockInputUnderPopup {};
struct CharGen_SetBodyValues {};
struct CharGen_SetCameraPosition {};
struct CharGen_SetPronoun {};
struct CharGen_SetSex {};
struct CharGen_SetSlider {};
struct CharGen_SetTrait {};
struct CharGen_ShowChooseBackgroundMessage {};
struct CharGen_ShowPlayerRenameMessage {};
struct CharGen_SkintoneChange {};
struct CharGen_StartBodyChange {};
struct CharGen_StartTextEntry {};
struct CharGen_SwitchBodyType {};
struct CharGen_SwitchLocomotion {};
struct CharGen_TeethChange {};
struct CharGen_TeethRollOff {};
struct CharGen_TeethRollOn {};
struct CharGen_ToggleMarking {};
struct CharGen_TogglePreviewHabSuit {};
struct UIMenuChargenMenuDisablePaperdoll {};
struct DataMenu_CloseMenu {};
struct DataMenu_ClosedForSubMenu {};
struct DataMenu_Missions {};
struct DataMenu_PlotToLocation {};
struct DataMenu_Reopened {};
struct DataMenu_SelectedAttributesMenu {};
struct DataMenu_SelectedInventoryMenu {};
struct DataMenu_SelectedMapMenu {};
struct DataMenu_SelectedPowersMenu {};
struct DataMenu_SelectedShipMenu {};
struct DataMenu_SelectedStatusMenu {};
struct DataMenu_SetMenuForQuickEntry {};
struct DataMenu_SetPaperDollActive {};
struct PauseMenu_ActionCanceled {};
struct PauseMenu_ConfirmAction {};
struct PauseMenu_ConfirmLoad {};
struct PauseMenu_ConfirmSave {};
struct PauseMenu_DeleteSave {};
struct PauseMenu_QuitToDesktop {};
struct PauseMenu_SetCharacter {};
struct PauseMenu_StartAction {};
struct PauseMenu_StartLoad {};
struct PauseMenu_UploadSave {};
struct PlayBink_CloseMenu {};
struct Reticle_OnLongAnimFinished {};
struct ShipHudQuickContainer_TransferItem {};
struct ShipHud_AbortJump {};
struct ShipHud_DockRequested {};
struct ShipHud_HailShip {};
struct ShipHud_UpdateTargetPanelRect {};
struct TakeoffMenu_CloseMenu {};
struct TakeoffMenu_ExitShip {};
struct TakeoffMenu_Launch {};
struct StarMapMenu_LandingInputInProgress {};
struct StarMapMenu_MarkerGroupContainerVisibilityChanged {};
struct StarMapMenu_MarkerGroupEntryClicked {};
struct StarMapMenu_MarkerGroupEntryHoverChanged {};
struct StarMapMenu_ScanPlanet {};
struct StarMapMenu_SelectedLandingSite {};
struct StarMapMenu_SelectedLandingSiteFailed {};
struct StarMapMenu_ShowRealCursor {};
struct StarMapMenu_QuickSelectChange {};
struct StarMapMenu_Galaxy_FocusSystem {};
struct StarMapMenu_OnGalaxyViewInitialized {};
struct StarMapMenu_ExecuteRoute {};
struct StarMapMenu_OnCancel {};
struct StarMapMenu_OnClearRoute {};
struct StarMapMenu_OnExitStarMap {};
struct StarMapMenu_OnHintButtonClicked {};
struct StarMapMenu_OnOutpostEntrySelected {};
struct StarMapMenu_ReadyToClose {};
struct SurfaceMapMenu_MarkerClicked {};
struct SurfaceMapMenu_TryPlaceCustomMarker {};
struct TerminalMenu_CancelEvent {};
struct Terminal_CloseAllViews {};
struct Terminal_CloseTopView {};
struct Terminal_CloseView {};
struct Terminal_MenuItemClick {};
struct TestMenu_DoAction {};
struct TestMenu_ExitMenu {};
struct TestMenu_ShowImages {};
struct TestMenu_ShowResources {};
struct TestMenu_TestAll {};
struct TextInputMenu_EndEditText {};
struct TextInputMenu_InputCanceled {};
struct TextInputMenu_StartEditText {};
struct CraftingMenu_Highlight3D {};
struct CraftingMenu_RevertHighlight {};
struct WorkshopBuilderMenu_ChangeBuildItem {};
struct WorkshopBuilderMenu_SelectedItem {};
struct WorkshopBuilderMenu_ToggleTracking {};
struct WorkshopMenu_AttemptBuild {};
struct WorkshopMenu_CancelAction {};
struct WorkshopMenu_ChangeVariant {};
struct WorkshopMenu_ConnectionEvent {};
struct WorkshopMenu_ExitMenu {};
struct WorkshopMenu_MessageCallback {};
struct WorkshopMenu_SelectedCategory {};
struct WorkshopMenu_SelectedGridObject {};
struct WorkshopMenu_ShowExtras {};
struct WorkshopMenu_SwitchMode {};
struct WorkshopMenu_ToggleDistance {};
struct WorkshopMenu_ToggleTracking {};
struct WorkshopMenu_ToggleView {};
struct WorkshopQuickMenu_ConfirmAction {};
struct WorkshopQuickMenu_ExitMenu {};
struct WorkshopTargetMenu_TargetHovered {};
struct WorkshopTargetMenu_TargetPicked {};
struct WorkshopActionButton_HoldFinished {};
struct WorkshopActionButton_HoldStopped {};
struct WorkshopShared_SetActionHandles {};
struct WorkshopShared_StartAction {};
struct ModelReferenceEffectEvents
{
    struct ReferenceEffectFinished {};
};
struct BGSAcousticSpaceListener
{
    struct StackChangedEvent {};
};
struct SpaceshipBIEvents
{
    struct ShipPowerAllocationBIEventSent {};
};
struct BGSActorDeathEvent {};
struct Research
{
    struct ResearchProgressEvent {};
};
struct PlayerAutoAimActorEvent {};
struct PlayerInCombatChangeEvent {};
struct BlurEvent {};
struct ContainerMenu_HideModel {};
struct ContainerMenu_Jettison {};
struct ContainerMenu_LoadModel {};
struct ContainerMenu_OpenRefuelMenu {};
struct ContainerMenu_SetMouseOverModel {};
struct ContainerMenu_TakeAll {};
struct ContainerMenu_ToggleEquip {};
struct ContainerMenu_TransferItem {};
struct DialogueMenu_OnDialogueSelect {};
struct DialogueMenu_OnListVisibilityChange {};
struct DialogueMenu_OnPersuasionAutoWin {};
struct DialogueMenu_OnScriptedDialogueSelect {};
struct DialogueMenu_RequestExit {};
struct DialogueMenu_RequestSkipDialogue {};
struct FaderMenuDisplayState {};
struct FavoritesMenu_AssignQuickkey {};
struct FavoritesMenu_UseQuickkey {};
struct LoadingMenu_RefreshText {};
struct MainMenu_ActionCanceled {};
struct MainMenu_ActionConfirmed {};
struct MainMenu_ConfirmLoad {};
struct MainMenu_DeleteSave {};
struct MainMenu_SetCharacter {};
struct MainMenu_StartAction {};
struct MainMenu_StartLoad {};
struct MainMenu_UploadSave {};
struct BGSAppPausedEvent {};
struct MessageBoxMenu_OnBackOut {};
struct MessageBoxMenu_OnButtonPress {};
struct MessageBoxMenu_OnScriptedButtonPress {};
struct SleepWaitMenu_InterruptRest {};
struct SleepWaitMenu_StartRest {};

struct ContextStackChangedEvent {};
struct UpdateSceneRectEvent {};
struct GameStalledEvent {};

// more

struct TESCellNavmeshGeneratedEvent {};
struct TESHitEvent {};
struct FirstThirdPersonSwitch
{
    struct Event {};
};
struct PerkChanged
{
    struct Event {};
};
struct TESHarvestEvent
{
    struct ItemHarvested {};
};
struct ActivityEvents
{
    struct ActivityCompletedEvent {};
};
struct ChallengeCompletedEvent
{
    struct Event {};
};
struct InventoryItemEvent
{
    struct Event {};
};
struct BooksRead
{
    struct Event {};
};
struct LocationExplored
{
    struct Event {};
};
struct LocationLinked
{
    struct Event {};
};
struct Activation
{
    struct Event {};
};
struct ActorCellChangeEvent {};
struct ActorHeadAttachedEvent {};
struct ActorValueEvents
{
    struct ActorValueChangedEvent {};
};
struct AliasChangeEvent {};
struct AnimationGraphDependentEvent {};
struct BGSAffinityEventEvent {};
struct BGSCellGridLoadEvent {};
struct BGSEventProcessedEvent {};
struct BGSHavokWorldCreatedEvent {};
struct BGSLocationLoadedEvent {};
struct BGSOnPlayerCompanionDismiss {};
struct BGSOnPlayerCompleteResearchEvent {};
struct BGSOnPlayerCraftItemEvent {};
struct BGSOnPlayerCreateRobotEvent {};
struct BGSOnPlayerEnterVertibirdEvent {};
struct BGSOnPlayerFallLongDistances {};
struct BGSOnPlayerFireWeaponEvent {};
struct BGSOnPlayerHealTeammateEvent {};
struct BGSOnPlayerLoiteringBeginEvent {};
struct BGSOnPlayerLoiteringEndEvent {};
struct BGSOnPlayerModArmorWeaponEvent {};
struct BGSOnPlayerModRobotEvent {};
struct BGSOnPlayerSwimmingEvent {};
struct BGSOnPlayerUseWorkBenchEvent {};
struct BGSOnSpeechChallengeAvailable {};
struct BGSRadiationDamageEvent {};
struct BuilderMenuSelectEvent {};
struct CrewAssignedEvent {};
struct CrewDismissedEvent {};
struct DestroyedEvent {};
struct HomeShipSetEvent {};
struct InstantReferenceInteractionEvent {};
struct ItemConsumedEvent {};
struct ItemSwappedEvent {};
struct LockPickedEvent {};
struct MapMarkerDiscoveredEvent {};
struct ObjectScannedEvent {};
struct PlayerAddItemEvent {};
struct PlayerArrestedEvent {};
struct PlayerAssaultActorEvent {};
struct PlayerBuyShipEvent {};
struct PlayerCrimeGoldEvent {};
struct PlayerFailedPlotRouteEvent {};
struct PlayerJailEvent {};
struct PlayerModifiedShipEvent {};
struct PlayerMurderActorEvent {};
struct PlayerPayFineEvent {};
struct PlayerPlanetSurveyCompleteEvent {};
struct PlayerPlanetSurveyProgressEvent {};
struct PlayerSellShipEvent {};
struct PlayerTrespassEvent {};
struct QuickContainerOpenedEvent {};
struct RefControlChangedEvent {};
struct ReferenceDestroyedEvent {};
struct SpeechChallengeCompletionEvent {};
struct TESActivateEvent {};
struct TESActiveEffectApplyFinishEvent {};
struct TESActiveEffectRemovedEvent {};
struct TESActorActivatedRefEvent {};
struct TESActorLocationChangeEvent {};
struct TESBookReadEvent {};
struct TESCellCriticalRefsAttachedEvent {};
struct TESCellFullyLoadedEvent {};
struct TESCellGravityChangeEvent {};
struct TESCellReadyToApplyDecalsEvent {};
struct TESCellReference3DAttachEvent {};
struct TESCellReferenceAttachDetachEvent {};
struct TESCombatEvent {};
struct TESCombatListEvent {};
struct TESCommandModeCompleteCommandEvent {};
struct TESCommandModeEnterEvent {};
struct TESCommandModeExitEvent {};
struct TESCommandModeGiveCommandEvent {};
struct TESConsciousnessEvent {};
struct TESContainerChangedEvent
{
    u32          sourceContainerFormID;              // 00
    u32          targetContainerFormID;                // 04
    u32          itemFormID;                            // 08
    u32          count;                                // 0C
    //...
};
struct TESDeathEvent {};
struct TESDeferredKillEvent {};
struct TESDestructionStageChangedEvent {};
struct TESEnterBleedoutEvent {};
struct TESEnterSneakingEvent {};
struct TESEquipEvent {};
struct TESEscortWaitStartEvent {};
struct TESEscortWaitStopEvent {};
struct TESExitBleedoutEvent {};
struct TESExitFurnitureEvent {};
struct TESFormDeleteEvent
{
    u32 formId; // 00
};
struct TESFormIDRemapEvent
{
    u32 oldID;  // 00
    u32 newID;  // 04
};
struct TESFurnitureEvent {};
struct TESGrabReleaseEvent {};
struct TESInitScriptEvent {};
struct TESLimbCrippleEvent {};
struct TESLoadGameEvent {};
struct TESLocationExploredEvent {};
struct TESLockChangedEvent {};
struct TESMagicEffectApplyEvent {};
struct TESMissionAcceptedEvent {};
struct TESObjectLoadedEvent {};
struct TESObjectREFRTranslationEvent {};
struct TESOnPCDialogueTargetEvent {};
struct TESOpenCloseEvent {};
struct TESPackageEvent {};
struct TESPerkEntryRunEvent {};
struct TESPickNewIdleEvent {};
struct TESPickpocketFailedEvent {};
struct TESPlayerActiveEffectEvent {};
struct TESPlayerFollowerWarpEvent {};
struct TESQuestInitEvent {};
struct TESQuestRejectedEvent {};
struct TESQuestStageEvent {};
struct TESQuestStageItemDoneEvent {};
struct TESQuestStartStopEvent {};
struct TESQuestTimerEvent {};
struct TESResetEvent {};
struct TESResolveNPCTemplatesEvent {};
struct TESSceneActionEvent {};
struct TESSceneEvent {};
struct TESScenePhaseEvent {};
struct TESSellEvent {};
struct TESSleepStartEvent {};
struct TESSleepStopEvent {};
struct TESSpellCastEvent {};
struct TESSpellCastFailureEvent {};
struct TESSwitchRaceCompleteEvent {};
struct TESTopicInfoEvent {};
struct TESTrackedStatsEvent {};
struct TESTrapHitEvent {};
struct TESTriggerEnterEvent {};
struct TESTriggerEvent {};
struct TESTriggerLeaveEvent {};
struct TESUniqueIDChangeEvent {};
struct TESWaitStartEvent {};
struct TESWaitStopEvent {};
struct TerminalMenuMenuItemRunEvent {};
struct TerminalMenuOnEnterEvent {};
struct WorkshopNPCTransferEvent {};
struct TESObjectREFRIsReadyForAttachEvent {};
struct DefaultObjectsReadyEvent
{
    struct Event {};
};
struct ObjectiveState
{
    struct Event {};
};
struct QuestStatus
{
    struct Event {};
};
struct RefillAliasEvent
{
    struct Event {};
};
struct TESQuestEvent
{
    struct Event {};
};
struct RolloverIsCrimeEvent
{
    struct Event {};
};
struct HideSubtitleEvent
{
    struct Event {};
};
struct ShowSubtitleEvent
{
    struct Event {};
};
struct MissionMenuStateEvent
{
    struct Event {};
};
struct ClearShipHudTarget
{
    struct Event {};
};
struct TryUpdateShipHudTarget
{
    struct Event {};
};
struct LocationTextEvent
{
    struct Event {};
};
struct TraitDiscoveryTextEvent
{
    struct Event {};
};
struct DaysPassed
{
    struct Event {};
};
struct HourPassed
{
    struct Event {};
};
struct ActorDamage
{
    struct Event {};
};
struct ActorItemEquipped
{
    struct Event {};
};
struct ActorKill
{
    struct Event {};
};
struct AssaultCrime
{
    struct Event {};
};
struct DisarmedEvent
{
    struct Event {};
};
struct FactionRankChange
{
    struct Event {};
};
struct GrandTheftHorse
{
    struct Event {};
};
struct MurderCrime
{
    struct Event {};
};
struct PiracyCrime
{
    struct Event {};
};
struct Bleedout
{
    struct Event {};
};
struct ContractedDisease
{
    struct Event {};
};
struct ReloadWeaponEvent
{
    struct Event {};
};
struct SpellsLearned
{
    struct Event {};
};
struct Bounty
{
    struct Event {};
};
struct ChestLooted
{
    struct Event {};
};
struct CriticalHitEvent
{
    struct Event {};
};
struct CustomMarkerUpdate
{
    struct Event {};
};
struct DaysJailed
{
    struct Event {};
};
struct EnteredUnity
{
    struct Event {};
};
struct FinePaid
{
    struct Event {};
};
struct ItemCrafted
{
    struct Event {};
};
struct ItemSteal
{
    struct Event {};
};
struct JailEscape
{
    struct Event {};
};
struct Jailing
{
    struct Event {};
};
struct LevelIncrease
{
    struct Event {};
};
struct LocationMarkerArrayUpdate
{
    struct Event {};
};
struct PlayerActiveEffectChanged
{
    struct Event {};
};
struct PlayerAmmoChanged
{
    struct Event {};
};
struct PlayerCharacterQuestEvent
{
    struct Event {};
};
struct PlayerDifficultySettingChanged
{
    struct Event {};
};
struct PlayerFastTravel
{
    struct Event {};
};
struct PlayerInDialogueChanged
{
    struct Event {};
};
struct PlayerLifeStateChanged
{
    struct Event {};
};
struct PlayerPickpocketSuccess
{
    struct Event {};
};
struct PoisonedWeapon
{
    struct Event {};
};
struct TerminalHacked
{
    struct Event {};
};
struct TravelMarkerStateChange
{
    struct Event {};
};
struct WeaponAttack
{
    struct Event {};
};
struct Trespass
{
    struct Event {};
};
struct VATSEvents
{
    struct ModeChange {};
};
struct VATSCommand {};
struct HoursPassed
{
    struct Event {};
};

// UI events

struct MenuOpenCloseEvent
{
    BSFixedString	MenuName;
    bool			bOpening;
};
struct MenuModeChangeEvent {};
struct MenuPauseChangeEvent {};
struct MenuPauseCounterChangeEvent {};
struct TutorialEvent {};
struct BSCursorTypeChange {};
struct BSCursorRotationChange {};
struct BIUIMenuVisiblePausedBeginEvent {};
struct BIUIMenuVisiblePausedEndEvent {};

// other events

struct RadioManager
{
    struct PipboyTransmitterDetectionEvent {};
};
struct XPChange
{
    struct Event
    {
        Actor* actor;
        void* unk08;
        float totalXP;
        float recievedXP;
        //...
    };
};
struct WeaponFiredEvent
{
    void* unk00;
    void* unk08;
    Actor* actor;
    //...
};
struct ActorEquipManagerEvent
{
    struct Event {};
    struct SpellEvent {};
};
struct AttachReference
{
    struct Event {};
};
//

namespace BSTEventDetail
{
    class SinkBase
    {
    public:
        virtual ~SinkBase() {};
    };

    class SourceBase
    {
    public:
        virtual ~SourceBase() {};
        DEFINE_MEMBER_FN_1(RegisterSink, void, 0x005C861C, SinkBase* sink);
        DEFINE_MEMBER_FN_1(UnregisterSink, void, 0x005C8430, SinkBase* sink);
    };
}

enum class BSEventNotifyControl
{
    kContinue,
    kStop
};
using EventResult = BSEventNotifyControl;

template <typename T>
class BSTEventSource;

template <typename T>
class BSTEventSink : public BSTEventDetail::SinkBase
{
public:
    virtual ~BSTEventSink() { };
    virtual	EventResult	ProcessEvent(const T& arEvent, BSTEventSource<T>* eventSource) { return EventResult::kContinue; }; // pure
};

template<typename T>
class BSTEventSource : public BSTEventDetail::SourceBase
{
public:
    virtual ~BSTEventSource();

    BSTArray<BSTEventSink<T>> pSinksA;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
    u32 unk24;
};

class BSTGlobalEvent
{
public:
    virtual ~BSTGlobalEvent();

    template <typename T>
    class EventSource : public BSTEventSource<T>
    {
    public:
        virtual ~EventSource();
        virtual EventResult ProcessEvent(const T& arEvent, BSTEventSource<T>* eventSource);
    };
};

template <class T>
class BSTValueEventSink :
    public BSTEventSink<T>  // 00
{
};

template <class T>
class BSTValueRequestEvent
{
};

template<typename EventT>
BSTEventSource<EventT>* GetEventSource() { };

#define DECLARE_EVENT_SOURCE(Event, address) \
template<> inline BSTEventSource<Event> * GetEventSource() \
{ \
    typedef BSTEventSource<Event> * (*_GetEventSource)(); \
    RelocAddr<_GetEventSource> GetEventSource(address); \
    return GetEventSource(); \
}

#define DECLARE_EVENT_SOURCE_EX(Event, address) \
template<> inline BSTEventSource<Event> * GetEventSource() \
{ \
RelocPtr<BSTEventSource<Event>> es(address); \
return es.getPtr(); \
}

// BSTGlobalEvent

DECLARE_EVENT_SOURCE(SnapTemplateUtils::SnapReplaceEvent, 0x007A3F54)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_RequestImage, 0x007A520C)
DECLARE_EVENT_SOURCE(ImageFixtureEvent_UnregisterImage, 0x007A8108)
DECLARE_EVENT_SOURCE(Spaceship::TakeOffEvent, 0x007AAFB8)
DECLARE_EVENT_SOURCE(HUDActivityIncreaseEvent, 0x012148B0)
DECLARE_EVENT_SOURCE(AnimationDataCleanupEvent, 0x01267F9C)
DECLARE_EVENT_SOURCE(AnimationDataSetupEvent, 0x0126802C)
DECLARE_EVENT_SOURCE(EndLoadGameEvent, 0x012BE7B4)
DECLARE_EVENT_SOURCE(StartLoadGameEvent, 0x012BE844)
DECLARE_EVENT_SOURCE(ShipEditor_SystemSelected, 0x012F4CEC)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewUpgrade, 0x012FB3E4)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedUpgrade, 0x012FB474)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceAttach, 0x01353E90)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDetach, 0x01353F20)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_ChangeWeaponAssignment, 0x013DEDA4)
DECLARE_EVENT_SOURCE(WeaponGroupAssignmentMenu_OnHintButtonActivated, 0x013DEE34)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmCancel, 0x01401C94)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmExit, 0x01401D24)
DECLARE_EVENT_SOURCE(ShipEditor_OnExitConfirmSaveAndExit, 0x01401DB4)
DECLARE_EVENT_SOURCE(ShipEditor_OnFlightCheckTabChanged, 0x01406904)
DECLARE_EVENT_SOURCE(ShipEditor_OnWeaponGroupChanged, 0x01406994)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameEndEditText, 0x0140C2C0)
DECLARE_EVENT_SOURCE(ShipEditor_OnRenameInputCancelled, 0x0140C350)
DECLARE_EVENT_SOURCE(ShipEditor_ChangeModuleCategory, 0x01410B34)
DECLARE_EVENT_SOURCE(ShipEditor_PreviewShipPart, 0x01410BC4)
DECLARE_EVENT_SOURCE(ShipEditor_SelectedShipPart, 0x01410C54)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerControlChanged, 0x0130225C)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorPickerTabChanged, 0x013022EC)
DECLARE_EVENT_SOURCE(ShipEditor_OnColorSliderMouseInput, 0x0130237C)
DECLARE_EVENT_SOURCE(ShipEditor_OnRecentColorSwatchClicked, 0x0130240C)
DECLARE_EVENT_SOURCE(ShipBuilder_CloseAllMenus, 0x0143E92C)
DECLARE_EVENT_SOURCE(ShipEditor_OnHintButtonActivated, 0x0143E9BC)
DECLARE_EVENT_SOURCE(ShipEditor_RemoveAll3D, 0x0143EA4C)
DECLARE_EVENT_SOURCE(ReferenceQueuedEvent, 0x014AA1D8)
DECLARE_EVENT_SOURCE(LoadScreenEndEvent, 0x014C401C)
DECLARE_EVENT_SOURCE(LoadScreenStartEvent, 0x014C40AC)
DECLARE_EVENT_SOURCE(CellAttachDetachEvent, 0x014C413C)
DECLARE_EVENT_SOURCE(PickRefStateChangedEvent, 0x0153CAC8)
DECLARE_EVENT_SOURCE(ActivityTrackerActivityStartedEvent, 0x015470A8)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceCleared3d, 0x015D4300)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceDestroy, 0x015D4390)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceInit, 0x015D4420)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceRecycle, 0x015D44B0)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::ReferenceSet3d, 0x015D4540)
DECLARE_EVENT_SOURCE(RuntimeComponentDBFactory::Release3DRelatedData, 0x015D45D0)
DECLARE_EVENT_SOURCE(BSWorldOriginShiftEvent, 0x015E0A7C)
DECLARE_EVENT_SOURCE(BGSPlanet::PlayerKnowledgeFlagSetEvent, 0x01707B0C)
DECLARE_EVENT_SOURCE(StarMap::PlanetTraitKnownEvent, 0x01707B9C)
DECLARE_EVENT_SOURCE(ResetHistoryDataEvent, 0x017DC5E8)
DECLARE_EVENT_SOURCE(TESQuestRewardEvent, 0x017F6818)
DECLARE_EVENT_SOURCE(HUDWeaponWorldFOVMultChangedEvent, 0x017F8A8C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionEndEvent, 0x018EF24C)
DECLARE_EVENT_SOURCE(BGSSceneActionPlayerDialogue::ActionStartEvent, 0x018EF2DC)
DECLARE_EVENT_SOURCE(AutoLoadDoorRolloverEvent, 0x0199FB9C)
DECLARE_EVENT_SOURCE(ClearQuickContainerEvent, 0x0199FC2C)
DECLARE_EVENT_SOURCE(ReferenceCellLoadedTemps, 0x01A18D3C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkAddedEvent, 0x01DA549C)
DECLARE_EVENT_SOURCE(Workshop::CargoLinkTargetChangedEvent, 0x01DA552C)
DECLARE_EVENT_SOURCE(Workshop::EnterOutpostBeaconModeEvent, 0x01DA55BC)
DECLARE_EVENT_SOURCE(Workshop::ItemGrabbedEvent, 0x01DA564C)
DECLARE_EVENT_SOURCE(Workshop::ItemMovedEvent, 0x01DA56DC)
DECLARE_EVENT_SOURCE(Workshop::ItemPlacedEvent, 0x01DA576C)
DECLARE_EVENT_SOURCE(Workshop::ItemProducedEvent, 0x01DA57FC)
DECLARE_EVENT_SOURCE(Workshop::ItemRemovedEvent, 0x01DA588C)
DECLARE_EVENT_SOURCE(Workshop::ItemRepairedEvent, 0x01DA591C)
DECLARE_EVENT_SOURCE(Workshop::ItemScrappedEvent, 0x01DA59AC)
DECLARE_EVENT_SOURCE(Workshop::OutpostNameChangedEvent, 0x01DA5A3C)
DECLARE_EVENT_SOURCE(Workshop::OutpostPlacedEvent, 0x01DA5ACC)
DECLARE_EVENT_SOURCE(PickRefUpdateEvent, 0x01DA5B5C)
DECLARE_EVENT_SOURCE(Workshop::PlacementStatusEvent, 0x01DA5BEC)
DECLARE_EVENT_SOURCE(Workshop::PowerOffEvent, 0x01DA5C7C)
DECLARE_EVENT_SOURCE(Workshop::PowerOnEvent, 0x01DA5D0C)
DECLARE_EVENT_SOURCE(Workshop::SnapBehaviorCycledEvent, 0x01DA5D9C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopFlyCameraEvent, 0x01DA5E2C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopItemPlacedEvent, 0x01DA5EBC)
DECLARE_EVENT_SOURCE(Workshop::WorkshopModeEvent, 0x01DA5F4C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopOutputLinkEvent, 0x01DA607C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopStatsChangedEvent, 0x01DA610C)
DECLARE_EVENT_SOURCE(Workshop::WorkshopUpdateStatsEvent, 0x01DA619C)
DECLARE_EVENT_SOURCE(ShipCameraStateToggled, 0x01E01B84)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpPressEvent, 0x01FD88E4)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerJumpReleaseEvent, 0x01FD8974)
DECLARE_EVENT_SOURCE(PlayerSneakingChangeEvent, 0x01FDA15C)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintJustPressedEvent, 0x01FDA398)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerZeroGSprintReleasedEvent, 0x01FDA428)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsEndEvent, 0x01FDF4D0)
DECLARE_EVENT_SOURCE(PlayerControls::PlayerIronSightsStartEvent, 0x01FDF560)
DECLARE_EVENT_SOURCE(SaveLoadEvent, 0x0200F1CC)
DECLARE_EVENT_SOURCE(SpaceshipWeaponBinding::SpaceshipWeaponBindingChangedEvent, 0x020419C8)
DECLARE_EVENT_SOURCE(BoundaryMenu_FastTravel, 0x02095EE8)
DECLARE_EVENT_SOURCE(BoundaryMenu_ShowMap, 0x02095F78)
DECLARE_EVENT_SOURCE(PhotoGallery_DeletePhoto, 0x020F6824)
DECLARE_EVENT_SOURCE(PowersMenu_ActivateEssence, 0x020F9D00)
DECLARE_EVENT_SOURCE(PowersMenu_EquipPower, 0x020F9D90)
DECLARE_EVENT_SOURCE(PowersMenu_FavoritePower, 0x020F9E20)
DECLARE_EVENT_SOURCE(ContainerMenuClosed::Event, 0x0210C8FC)
DECLARE_EVENT_SOURCE(HangarShipSelection_ChangeSystemDisplay, 0x0210C98C)
DECLARE_EVENT_SOURCE(HangarShipSelection_RepairShip, 0x0210CA1C)
DECLARE_EVENT_SOURCE(HangarShipSelection_UpgradeSystem, 0x0210CAAC)
DECLARE_EVENT_SOURCE(ShipCrewMenu_Close, 0x0210CB3C)
DECLARE_EVENT_SOURCE(BinkMovieStoppedPlayingEvent, 0x02119960)
DECLARE_EVENT_SOURCE(WorkshopColorMode_ApplyColors, 0x02178EDC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SelectedTab, 0x02178F6C)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SliderChanged, 0x02178FFC)
DECLARE_EVENT_SOURCE(WorkshopColorMode_SwatchChanged, 0x0217908C)
DECLARE_EVENT_SOURCE(HUDCrewBuffMessageEvent, 0x0217A26C)
DECLARE_EVENT_SOURCE(CraftingMenu_SessionSummaryEvent, 0x02183348)
DECLARE_EVENT_SOURCE(CraftingMenu_CraftItem, 0x021833D8)
DECLARE_EVENT_SOURCE(CraftingMenu_ExitBench, 0x02183468)
DECLARE_EVENT_SOURCE(CraftingMenu_InstallMod, 0x021834F8)
DECLARE_EVENT_SOURCE(CraftingMenu_RenameItem, 0x02183588)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertedModdedItem, 0x02183618)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedMod, 0x021836A8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModSlot, 0x02183738)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedModdableItem, 0x021837C8)
DECLARE_EVENT_SOURCE(CraftingMenu_SelectedRecipe, 0x02183858)
DECLARE_EVENT_SOURCE(CraftingMenu_SetInspectControls, 0x021838E8)
DECLARE_EVENT_SOURCE(CraftingMenu_ToggleTracking, 0x02183978)
DECLARE_EVENT_SOURCE(CraftingMenu_ViewingModdableItem, 0x02183A08)
DECLARE_EVENT_SOURCE(ContainerMenu_CloseMenu, 0x02191BCC)
DECLARE_EVENT_SOURCE(InventoryMenu_Change3DView, 0x02191CFC)
DECLARE_EVENT_SOURCE(InventoryMenu_PaperDollTryOn, 0x02191D8C)
DECLARE_EVENT_SOURCE(InventoryMenu_ResetPaperDollInv, 0x02191E1C)
DECLARE_EVENT_SOURCE(UpdateActivateListenerEvent, 0x02199E68)
DECLARE_EVENT_SOURCE(StartOutpostFromListenerEvent, 0x0219BAE8)
DECLARE_EVENT_SOURCE(HUDModeEvent, 0x021ABD4C)
DECLARE_EVENT_SOURCE(OpenContainerMenuEventData, 0x021ABDDC)
DECLARE_EVENT_SOURCE(OpenContainerMenuFromListenerEvent, 0x021ABE6C)
DECLARE_EVENT_SOURCE(HUDRolloverActivationButtonEvent, 0x021ABEFC)
DECLARE_EVENT_SOURCE(HUDRolloverActivationQCItemPressEvent, 0x021ABF8C)
DECLARE_EVENT_SOURCE(Inventory_SetSort, 0x021AC01C)
DECLARE_EVENT_SOURCE(ShowingQuestMarketTextEvent, 0x021B9508)
DECLARE_EVENT_SOURCE(TargetHitEvent, 0x021BBD28)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerCrosshairModeEvent>, 0x021BBDB8)
DECLARE_EVENT_SOURCE(ClearHUDMessagesEvent, 0x021C3384)
DECLARE_EVENT_SOURCE(ShowHUDMessageEvent, 0x021C3414)
DECLARE_EVENT_SOURCE(PlayerDetectionLevelChangeEvent, 0x021C65B4)
DECLARE_EVENT_SOURCE(ShowCustomWatchAlert, 0x021CB674)
DECLARE_EVENT_SOURCE(PlayerUpdateEvent, 0x022088CC)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleHelmet, 0x0220895C)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleSuit, 0x022089EC)
DECLARE_EVENT_SOURCE(ControlsRemappedEvent, 0x022512C8)
DECLARE_EVENT_SOURCE(SettingsPanel_CheckBoxChanged, 0x02251358)
DECLARE_EVENT_SOURCE(SettingsPanel_ClearBinding, 0x022513E8)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenCategory, 0x0225151C)
DECLARE_EVENT_SOURCE(SettingsPanel_OpenSettings, 0x022515AC)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapConfirmed, 0x0225163C)
DECLARE_EVENT_SOURCE(SettingsPanel_RemapMode, 0x022516CC)
DECLARE_EVENT_SOURCE(SettingsPanel_ResetToDefaults, 0x0225175C)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveControls, 0x022517EC)
DECLARE_EVENT_SOURCE(SettingsPanel_SaveSettings, 0x0225187C)
DECLARE_EVENT_SOURCE(SettingsPanel_SliderChanged, 0x0225190C)
DECLARE_EVENT_SOURCE(SettingsPanel_StepperChanged, 0x0225199C)
DECLARE_EVENT_SOURCE(SettingsPanel_ValidateControls, 0x02251A2C)
DECLARE_EVENT_SOURCE(ShipCrewMenu_OpenAssignMenu, 0x0225C4C8)
DECLARE_EVENT_SOURCE(ShipCrewMenu_SetSort, 0x0225C558)
DECLARE_EVENT_SOURCE(Spaceship::PlayerMovementOutputEvent, 0x02281D68)
DECLARE_EVENT_SOURCE(ShowLongShipBootup, 0x02281DF8)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferMenu, 0x02281E88)
DECLARE_EVENT_SOURCE(ShipHud_Activate, 0x02281F18)
DECLARE_EVENT_SOURCE(ShipHud_BodyViewMarkerDimensions, 0x02281FA8)
DECLARE_EVENT_SOURCE(ShipHud_ChangeComponentSelection, 0x02282038)
DECLARE_EVENT_SOURCE(ShipHud_CloseMenu, 0x022820C8)
DECLARE_EVENT_SOURCE(ShipHud_Deselect, 0x02282158)
DECLARE_EVENT_SOURCE(ShipHud_FarTravel, 0x022821E8)
DECLARE_EVENT_SOURCE(ShipHud_HailAccepted, 0x02282278)
DECLARE_EVENT_SOURCE(ShipHud_HailCancelled, 0x02282308)
DECLARE_EVENT_SOURCE(ShipHud_JumpToQuestMarker, 0x02282398)
DECLARE_EVENT_SOURCE(ShipHud_Land, 0x02282428)
DECLARE_EVENT_SOURCE(ShipHud_LandingMarkerMap, 0x022824B8)
DECLARE_EVENT_SOURCE(ShipHud_Map, 0x02282548)
DECLARE_EVENT_SOURCE(ShipHud_OnMonocleToggle, 0x022825D8)
DECLARE_EVENT_SOURCE(ShipHud_OpenPhotoMode, 0x02282668)
DECLARE_EVENT_SOURCE(ShipHud_Repair, 0x022826F8)
DECLARE_EVENT_SOURCE(ShipHud_SetTargetMode, 0x02282788)
DECLARE_EVENT_SOURCE(ShipHud_Target, 0x02282818)
DECLARE_EVENT_SOURCE(ShipHud_TargetShipSystem, 0x022828A8)
DECLARE_EVENT_SOURCE(ShipHud_UntargetShipSystem, 0x02282938)
DECLARE_EVENT_SOURCE(ShipHud_UpdateComponentPower, 0x022829C8)
DECLARE_EVENT_SOURCE(DialogueMenu_CompleteExit, 0x022AE42C)
DECLARE_EVENT_SOURCE(BGSScannerGuideEffectStatusUpdateEvent, 0x022BF340)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseAllMenus, 0x022C4498)
DECLARE_EVENT_SOURCE(GlobalFunc_CloseMenu, 0x022C4528)
DECLARE_EVENT_SOURCE(GlobalFunc_PlayMenuSound, 0x022C45B8)
DECLARE_EVENT_SOURCE(GlobalFunc_StartGameRender, 0x022C4648)
DECLARE_EVENT_SOURCE(GlobalFunc_UserEvent, 0x022C46D8)
DECLARE_EVENT_SOURCE(ExperienceMeterDisplayData, 0x022CF608)
DECLARE_EVENT_SOURCE(LevelUp_AnimFinished, 0x022CF698)
DECLARE_EVENT_SOURCE(LevelUp_OnWidgetShown, 0x022CF728)
DECLARE_EVENT_SOURCE(LevelUp_OpenDataMenu, 0x022CF7B8)
DECLARE_EVENT_SOURCE(LevelUp_ShowSkills, 0x022CF848)
DECLARE_EVENT_SOURCE(LocationTextWidget_FinishedQueue, 0x022CF8D8)
DECLARE_EVENT_SOURCE(DisplayFatigueWarningEvent, 0x022CFB80)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<SaveLoadMessageStringEvent>, 0x022D365C)
DECLARE_EVENT_SOURCE(PlayerCrosshairModeEvent, 0x021BB360)
DECLARE_EVENT_SOURCE(HUDNotificationEvent, 0x022DC8C8)
DECLARE_EVENT_SOURCE(HUDNotification_MissionActiveWidgetUpdate, 0x022DC958)
DECLARE_EVENT_SOURCE(HUDNotification_OpenDataMenu, 0x022DC9E8)
DECLARE_EVENT_SOURCE(HUDNotification_OpenMissionMenu, 0x022DCA78)
DECLARE_EVENT_SOURCE(HUDNotification_SetMissionActive, 0x022DCB08)
DECLARE_EVENT_SOURCE(PlayerSetWeaponStateEvent, 0x022DE6D8)
DECLARE_EVENT_SOURCE(BarterMenu_BuyItem, 0x022F1D08)
DECLARE_EVENT_SOURCE(BarterMenu_CloseMenu, 0x022F1D98)
DECLARE_EVENT_SOURCE(BarterMenu_HideModel, 0x022F1E28)
DECLARE_EVENT_SOURCE(BarterMenu_LoadModel, 0x022F1EB8)
DECLARE_EVENT_SOURCE(BarterMenu_SellItem, 0x022F1F48)
DECLARE_EVENT_SOURCE(BarterMenu_SetMouseOverModel, 0x022F1FD8)
DECLARE_EVENT_SOURCE(BarterMenu_ShowFailureMessage, 0x022F2068)
DECLARE_EVENT_SOURCE(BarterMenu_ViewedItem, 0x022F20F8)
DECLARE_EVENT_SOURCE(MissionMenu_ClearState, 0x022F6700)
DECLARE_EVENT_SOURCE(MissionMenu_PlotToLocation, 0x022F6790)
DECLARE_EVENT_SOURCE(MissionMenu_RejectQuest, 0x022F6820)
DECLARE_EVENT_SOURCE(MissionMenu_SaveCategoryIndex, 0x022F68B0)
DECLARE_EVENT_SOURCE(MissionMenu_SaveOpenedId, 0x022F6940)
DECLARE_EVENT_SOURCE(MissionMenu_ShowItemLocation, 0x022F69D0)
DECLARE_EVENT_SOURCE(MissionMenu_ToggleTrackingQuest, 0x022F6AFC)
DECLARE_EVENT_SOURCE(DataSlateButtons_acceptClicked, 0x022FC238)
DECLARE_EVENT_SOURCE(DataSlateButtons_cancelClicked, 0x022FC2C8)
DECLARE_EVENT_SOURCE(DataSlateMenu_playSFX, 0x022FC358)
DECLARE_EVENT_SOURCE(DataSlateMenu_toggleAudio, 0x022FC3E8)
DECLARE_EVENT_SOURCE(InventoryMenu_DropItem, 0x02303074)
DECLARE_EVENT_SOURCE(InventoryMenu_HideModel, 0x02303104)
DECLARE_EVENT_SOURCE(InventoryMenu_LoadModel, 0x02303194)
DECLARE_EVENT_SOURCE(InventoryMenu_OnEnterCategory, 0x02303224)
DECLARE_EVENT_SOURCE(InventoryMenu_OpenCargoHold, 0x023032B4)
DECLARE_EVENT_SOURCE(InventoryMenu_SelectItem, 0x02303344)
DECLARE_EVENT_SOURCE(InventoryMenu_SetMouseOverModel, 0x023033D4)
DECLARE_EVENT_SOURCE(InventoryMenu_ToggleFavorite, 0x0230350C)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryChanged, 0x0230F9C8)
DECLARE_EVENT_SOURCE(MissionBoard_MissionEntryPressed, 0x0230FA58)
DECLARE_EVENT_SOURCE(MonocleMenu_Bioscan, 0x02317878)
DECLARE_EVENT_SOURCE(MonocleMenu_FastTravel, 0x02317908)
DECLARE_EVENT_SOURCE(MonocleMenu_Harvest, 0x02317998)
DECLARE_EVENT_SOURCE(MonocleMenu_Initialize, 0x02317A28)
DECLARE_EVENT_SOURCE(MonocleMenu_Outpost, 0x02317B5C)
DECLARE_EVENT_SOURCE(MonocleMenu_PhotoMode, 0x02317BEC)
DECLARE_EVENT_SOURCE(MonocleMenu_Shutdown, 0x02317C7C)
DECLARE_EVENT_SOURCE(MonocleMenu_SocialSpell, 0x02317D0C)
DECLARE_EVENT_SOURCE(MonocleMenu_StartContainerView, 0x02317D9C)
DECLARE_EVENT_SOURCE(MonocleMenu_StopContainerView, 0x02317E2C)
DECLARE_EVENT_SOURCE(MonocleMenu_SurfaceMap, 0x02317EBC)
DECLARE_EVENT_SOURCE(MonocleMenu_UseListScrollControls, 0x02317F4C)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomIn, 0x02317FDC)
DECLARE_EVENT_SOURCE(MonocleMenu_ZoomOut, 0x0231806C)
DECLARE_EVENT_SOURCE(PhotoMode_InitializeCategory, 0x0231D918)
DECLARE_EVENT_SOURCE(PhotoMode_ResetToDefaults, 0x0231DA4C)
DECLARE_EVENT_SOURCE(PhotoMode_SliderChanged, 0x0231DADC)
DECLARE_EVENT_SOURCE(PhotoMode_StepperChanged, 0x0231DB6C)
DECLARE_EVENT_SOURCE(PhotoMode_TakeSnapshot, 0x0231DBFC)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleHelmet, 0x0231DC8C)
DECLARE_EVENT_SOURCE(PhotoMode_ToggleUI, 0x0231DD1C)
DECLARE_EVENT_SOURCE(PickpocketMenu_OnItemSelect, 0x023267F4)
DECLARE_EVENT_SOURCE(ResearchMenu_AddMaterial, 0x0232BC68)
DECLARE_EVENT_SOURCE(ResearchMenu_CategorySelected, 0x0232BCF8)
DECLARE_EVENT_SOURCE(ResearchMenu_ExitMenu, 0x0232BD88)
DECLARE_EVENT_SOURCE(ResearchMenu_HideModel, 0x0232BE18)
DECLARE_EVENT_SOURCE(ResearchMenu_PreviewProject, 0x0232BEA8)
DECLARE_EVENT_SOURCE(ResearchMenu_ProjectViewed, 0x0232BF38)
DECLARE_EVENT_SOURCE(ResearchMenu_SetInspectControls, 0x0232BFC8)
DECLARE_EVENT_SOURCE(ResearchMenu_ToggleTrackingProject, 0x0232C058)
DECLARE_EVENT_SOURCE(UnlockedTerminalElementEvent, 0x0233E058)
DECLARE_EVENT_SOURCE(SecurityMenu_BackOutKey, 0x0233E0E8)
DECLARE_EVENT_SOURCE(SecurityMenu_CloseMenu, 0x0233E178)
DECLARE_EVENT_SOURCE(SecurityMenu_ConfirmExit, 0x0233E208)
DECLARE_EVENT_SOURCE(SecurityMenu_EliminateUnusedKeys, 0x0233E298)
DECLARE_EVENT_SOURCE(SecurityMenu_GetRingHint, 0x0233E328)
DECLARE_EVENT_SOURCE(SecurityMenu_SelectNewKey, 0x0233E3B8)
DECLARE_EVENT_SOURCE(SecurityMenu_TryUseKey, 0x0233E448)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Assign, 0x02342404)
DECLARE_EVENT_SOURCE(ShipCrewAssignMenu_Unassign, 0x02342494)
DECLARE_EVENT_SOURCE(ShipCrewMenu_ViewedItem, 0x02342524)
DECLARE_EVENT_SOURCE(Refuel_Accept, 0x023443C4)
DECLARE_EVENT_SOURCE(Refuel_Cancel, 0x02344454)
DECLARE_EVENT_SOURCE(SkillsMenu_Accept, 0x0234AEE8)
DECLARE_EVENT_SOURCE(SkillsMenu_AddPatch, 0x0234AF78)
DECLARE_EVENT_SOURCE(SkillsMenu_Cancel, 0x0234B008)
DECLARE_EVENT_SOURCE(SkillsMenu_ChangeCursorVisibility, 0x0234B098)
DECLARE_EVENT_SOURCE(SkillsMenu_SaveLastCategory, 0x0234B128)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::MenuClosedEvent, 0x0236FA0C)
DECLARE_EVENT_SOURCE(BSChargenAPI::BIDataUtils::PresetNPCChangedEvent, 0x0236FA9C)
DECLARE_EVENT_SOURCE(CharGen_BrowChange, 0x0236FB2C)
DECLARE_EVENT_SOURCE(CharGen_BrowColorChange, 0x0236FBBC)
DECLARE_EVENT_SOURCE(CharGen_CancelTextEntry, 0x0236FC4C)
DECLARE_EVENT_SOURCE(CharGen_CloseMenu, 0x0236FCDC)
DECLARE_EVENT_SOURCE(CharGen_CyclePronoun, 0x0236FD6C)
DECLARE_EVENT_SOURCE(CharGen_DirtScarsEtcChange, 0x0236FDFC)
DECLARE_EVENT_SOURCE(CharGen_EndBodyChange, 0x0236FE8C)
DECLARE_EVENT_SOURCE(CharGen_EndTextEntry, 0x0236FF1C)
DECLARE_EVENT_SOURCE(CharGen_EyeColorChange, 0x0236FFAC)
DECLARE_EVENT_SOURCE(CharGen_FacialHairChange, 0x0237003C)
DECLARE_EVENT_SOURCE(CharGen_FacialHairColorChange, 0x023700CC)
DECLARE_EVENT_SOURCE(CharGen_HairChange, 0x0237015C)
DECLARE_EVENT_SOURCE(CharGen_HairColorChange, 0x023701EC)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPlusSelectorChange, 0x0237027C)
DECLARE_EVENT_SOURCE(CharGen_HeadpartPresetChange, 0x0237030C)
DECLARE_EVENT_SOURCE(CharGen_JewelryChange, 0x0237039C)
DECLARE_EVENT_SOURCE(CharGen_JewelryColorChange, 0x0237042C)
DECLARE_EVENT_SOURCE(CharGen_MakeupChange, 0x023704BC)
DECLARE_EVENT_SOURCE(CharGen_MarkingsChange, 0x0237054C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendColorOptionChange, 0x023705DC)
DECLARE_EVENT_SOURCE(CharGen_PostBlendFaceChange, 0x0237066C)
DECLARE_EVENT_SOURCE(CharGen_PostBlendIntensityChange, 0x023706FC)
DECLARE_EVENT_SOURCE(CharGen_PresetChange, 0x0237078C)
DECLARE_EVENT_SOURCE(CharGen_RollOffLocomotion, 0x0237081C)
DECLARE_EVENT_SOURCE(CharGen_RollOnLocomotion, 0x023708AC)
DECLARE_EVENT_SOURCE(CharGen_RotatePaperdoll, 0x0237093C)
DECLARE_EVENT_SOURCE(CharGen_SetAdditionalSlider, 0x023709CC)
DECLARE_EVENT_SOURCE(CharGen_SetBackground, 0x02370A5C)
DECLARE_EVENT_SOURCE(CharGen_SetBlockInputUnderPopup, 0x02370AEC)
DECLARE_EVENT_SOURCE(CharGen_SetBodyValues, 0x02370B7C)
DECLARE_EVENT_SOURCE(CharGen_SetCameraPosition, 0x02370C0C)
DECLARE_EVENT_SOURCE(CharGen_SetPronoun, 0x02370C9C)
DECLARE_EVENT_SOURCE(CharGen_SetSex, 0x02370D2C)
DECLARE_EVENT_SOURCE(CharGen_SetSlider, 0x02370DBC)
DECLARE_EVENT_SOURCE(CharGen_SetTrait, 0x02370E4C)
DECLARE_EVENT_SOURCE(CharGen_ShowChooseBackgroundMessage, 0x02370EDC)
DECLARE_EVENT_SOURCE(CharGen_ShowPlayerRenameMessage, 0x02370F6C)
DECLARE_EVENT_SOURCE(CharGen_SkintoneChange, 0x02370FFC)
DECLARE_EVENT_SOURCE(CharGen_StartBodyChange, 0x0237108C)
DECLARE_EVENT_SOURCE(CharGen_StartTextEntry, 0x0237111C)
DECLARE_EVENT_SOURCE(CharGen_SwitchBodyType, 0x023711AC)
DECLARE_EVENT_SOURCE(CharGen_SwitchLocomotion, 0x0237123C)
DECLARE_EVENT_SOURCE(CharGen_TeethChange, 0x023712CC)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOff, 0x0237135C)
DECLARE_EVENT_SOURCE(CharGen_TeethRollOn, 0x023713EC)
DECLARE_EVENT_SOURCE(CharGen_ToggleMarking, 0x0237147C)
DECLARE_EVENT_SOURCE(CharGen_TogglePreviewHabSuit, 0x0237150C)
DECLARE_EVENT_SOURCE(UIMenuChargenMenuDisablePaperdoll, 0x0237159C)
DECLARE_EVENT_SOURCE(DataMenu_CloseMenu, 0x02378698)
DECLARE_EVENT_SOURCE(DataMenu_ClosedForSubMenu, 0x02378728)
DECLARE_EVENT_SOURCE(DataMenu_Missions, 0x023787B8)
DECLARE_EVENT_SOURCE(DataMenu_PlotToLocation, 0x023788EC)
DECLARE_EVENT_SOURCE(DataMenu_Reopened, 0x0237897C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedAttributesMenu, 0x02378A0C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedInventoryMenu, 0x02378A9C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedMapMenu, 0x02378B2C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedPowersMenu, 0x02378BBC)
DECLARE_EVENT_SOURCE(DataMenu_SelectedShipMenu, 0x02378C4C)
DECLARE_EVENT_SOURCE(DataMenu_SelectedStatusMenu, 0x02378CDC)
DECLARE_EVENT_SOURCE(DataMenu_SetMenuForQuickEntry, 0x02378D6C)
DECLARE_EVENT_SOURCE(DataMenu_SetPaperDollActive, 0x02378DFC)
DECLARE_EVENT_SOURCE(PauseMenu_ActionCanceled, 0x02383DD4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmAction, 0x02383E64)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmLoad, 0x02383EF4)
DECLARE_EVENT_SOURCE(PauseMenu_ConfirmSave, 0x02383F84)
DECLARE_EVENT_SOURCE(PauseMenu_DeleteSave, 0x02384014)
DECLARE_EVENT_SOURCE(PauseMenu_QuitToDesktop, 0x023840A4)
DECLARE_EVENT_SOURCE(PauseMenu_SetCharacter, 0x02384134)
DECLARE_EVENT_SOURCE(PauseMenu_StartAction, 0x023841C4)
DECLARE_EVENT_SOURCE(PauseMenu_StartLoad, 0x02384254)
DECLARE_EVENT_SOURCE(PauseMenu_UploadSave, 0x023842E4)
DECLARE_EVENT_SOURCE(PlayBink_CloseMenu, 0x02385560)
DECLARE_EVENT_SOURCE(Spaceship::GravJumpEvent, 0x0238B1B4)
DECLARE_EVENT_SOURCE(Spaceship::LandedSetEvent, 0x0238B244)
DECLARE_EVENT_SOURCE(Reticle_OnLongAnimFinished, 0x0238B2D4)
DECLARE_EVENT_SOURCE(ShipHudQuickContainer_TransferItem, 0x0238B364)
DECLARE_EVENT_SOURCE(ShipHud_AbortJump, 0x0238B3F4)
DECLARE_EVENT_SOURCE(ShipHud_DockRequested, 0x0238B484)
DECLARE_EVENT_SOURCE(ShipHud_HailShip, 0x0238B514)
DECLARE_EVENT_SOURCE(ShipHud_UpdateTargetPanelRect, 0x0238B5A4)
DECLARE_EVENT_SOURCE(TakeoffMenu_CloseMenu, 0x0238B634)
DECLARE_EVENT_SOURCE(TakeoffMenu_ExitShip, 0x0238B6C4)
DECLARE_EVENT_SOURCE(TakeoffMenu_Launch, 0x0238B754)
DECLARE_EVENT_SOURCE(StarMapMenu_LandingInputInProgress, 0x023AB510)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupContainerVisibilityChanged, 0x023AB5A0)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryClicked, 0x023AB630)
DECLARE_EVENT_SOURCE(StarMapMenu_MarkerGroupEntryHoverChanged, 0x023AB6C0)
DECLARE_EVENT_SOURCE(StarMapMenu_ScanPlanet, 0x023AB750)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSite, 0x023AB7E0)
DECLARE_EVENT_SOURCE(StarMapMenu_SelectedLandingSiteFailed, 0x023AB870)
DECLARE_EVENT_SOURCE(StarMapMenu_ShowRealCursor, 0x023AB900)
DECLARE_EVENT_SOURCE(StarMapMenu_QuickSelectChange, 0x023C0BF0)
DECLARE_EVENT_SOURCE(StarMapMenu_Galaxy_FocusSystem, 0x023D2260)
DECLARE_EVENT_SOURCE(StarMapMenu_OnGalaxyViewInitialized, 0x023D22F0)
DECLARE_EVENT_SOURCE(StarMapMenu_ExecuteRoute, 0x023DD008)
DECLARE_EVENT_SOURCE(StarMapMenu_OnCancel, 0x023DD098)
DECLARE_EVENT_SOURCE(StarMapMenu_OnClearRoute, 0x023DD128)
DECLARE_EVENT_SOURCE(StarMapMenu_OnExitStarMap, 0x023DD1B8)
DECLARE_EVENT_SOURCE(StarMapMenu_OnHintButtonClicked, 0x023DD248)
DECLARE_EVENT_SOURCE(StarMapMenu_OnOutpostEntrySelected, 0x023DD2D8)
DECLARE_EVENT_SOURCE(StarMapMenu_ReadyToClose, 0x023DD368)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_MarkerClicked, 0x023FCCCC)
DECLARE_EVENT_SOURCE(SurfaceMapMenu_TryPlaceCustomMarker, 0x023FCD5C)
DECLARE_EVENT_SOURCE(TerminalMenu_CancelEvent, 0x02417EC0)
DECLARE_EVENT_SOURCE(Terminal_CloseAllViews, 0x02417F50)
DECLARE_EVENT_SOURCE(Terminal_CloseTopView, 0x02417FE0)
DECLARE_EVENT_SOURCE(Terminal_CloseView, 0x02418070)
DECLARE_EVENT_SOURCE(Terminal_MenuItemClick, 0x02418100)
DECLARE_EVENT_SOURCE(TestMenu_DoAction, 0x02423E78)
DECLARE_EVENT_SOURCE(TestMenu_ExitMenu, 0x02423F08)
DECLARE_EVENT_SOURCE(TestMenu_ShowImages, 0x02423F98)
DECLARE_EVENT_SOURCE(TestMenu_ShowResources, 0x02424028)
DECLARE_EVENT_SOURCE(TestMenu_TestAll, 0x024240B8)
DECLARE_EVENT_SOURCE(TextInputMenu_EndEditText, 0x02427FF4)
DECLARE_EVENT_SOURCE(TextInputMenu_InputCanceled, 0x02428084)
DECLARE_EVENT_SOURCE(TextInputMenu_StartEditText, 0x02428114)
DECLARE_EVENT_SOURCE(CraftingMenu_Highlight3D, 0x024293E4)
DECLARE_EVENT_SOURCE(CraftingMenu_RevertHighlight, 0x02429474)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ChangeBuildItem, 0x0242BAD8)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_SelectedItem, 0x0242BB68)
DECLARE_EVENT_SOURCE(WorkshopBuilderMenu_ToggleTracking, 0x0242BBF8)
DECLARE_EVENT_SOURCE(WorkshopMenu_AttemptBuild, 0x02434464)
DECLARE_EVENT_SOURCE(WorkshopMenu_CancelAction, 0x024344F4)
DECLARE_EVENT_SOURCE(WorkshopMenu_ChangeVariant, 0x02434584)
DECLARE_EVENT_SOURCE(WorkshopMenu_ConnectionEvent, 0x02434614)
DECLARE_EVENT_SOURCE(WorkshopMenu_ExitMenu, 0x024346A4)
DECLARE_EVENT_SOURCE(WorkshopMenu_MessageCallback, 0x02434734)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedCategory, 0x024347C4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SelectedGridObject, 0x02434854)
DECLARE_EVENT_SOURCE(WorkshopMenu_ShowExtras, 0x024348E4)
DECLARE_EVENT_SOURCE(WorkshopMenu_SwitchMode, 0x02434974)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleDistance, 0x02434A04)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleTracking, 0x02434A94)
DECLARE_EVENT_SOURCE(WorkshopMenu_ToggleView, 0x02434B24)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ConfirmAction, 0x02436574)
DECLARE_EVENT_SOURCE(WorkshopQuickMenu_ExitMenu, 0x02436604)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetHovered, 0x0243CB40)
DECLARE_EVENT_SOURCE(WorkshopTargetMenu_TargetPicked, 0x0243CBD0)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldFinished, 0x02453C64)
DECLARE_EVENT_SOURCE(WorkshopActionButton_HoldStopped, 0x02453CF4)
DECLARE_EVENT_SOURCE(WorkshopShared_SetActionHandles, 0x02453D84)
DECLARE_EVENT_SOURCE(WorkshopShared_StartAction, 0x02453E14)
DECLARE_EVENT_SOURCE(ModelReferenceEffectEvents::ReferenceEffectFinished, 0x02473E7C)
DECLARE_EVENT_SOURCE(BGSAcousticSpaceListener::StackChangedEvent, 0x024881F4)
DECLARE_EVENT_SOURCE(SpaceshipBIEvents::ShipPowerAllocationBIEventSent, 0x0249FFA4)
DECLARE_EVENT_SOURCE(BGSActorDeathEvent, 0x02116ABC)
DECLARE_EVENT_SOURCE(Research::ResearchProgressEvent, 0x0250120C)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<PlayerAutoAimActorEvent>, 0x02740848)
DECLARE_EVENT_SOURCE(PlayerInCombatChangeEvent, 0x02759470)
DECLARE_EVENT_SOURCE(BlurEvent, 0x02A2BDA0)
DECLARE_EVENT_SOURCE(ContainerMenu_HideModel, 0x02A4E680)
DECLARE_EVENT_SOURCE(ContainerMenu_Jettison, 0x02A4E710)
DECLARE_EVENT_SOURCE(ContainerMenu_LoadModel, 0x02A4E7A0)
DECLARE_EVENT_SOURCE(ContainerMenu_OpenRefuelMenu, 0x02A4E830)
DECLARE_EVENT_SOURCE(ContainerMenu_SetMouseOverModel, 0x02A4E8C0)
DECLARE_EVENT_SOURCE(ContainerMenu_TakeAll, 0x02A4E950)
DECLARE_EVENT_SOURCE(ContainerMenu_ToggleEquip, 0x02A4E9E0)
DECLARE_EVENT_SOURCE(ContainerMenu_TransferItem, 0x02A4EB0C)
DECLARE_EVENT_SOURCE(DialogueMenu_OnDialogueSelect, 0x02A525D0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnListVisibilityChange, 0x02A52660)
DECLARE_EVENT_SOURCE(DialogueMenu_OnPersuasionAutoWin, 0x02A526F0)
DECLARE_EVENT_SOURCE(DialogueMenu_OnScriptedDialogueSelect, 0x02A52780)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestExit, 0x02A52810)
DECLARE_EVENT_SOURCE(DialogueMenu_RequestSkipDialogue, 0x02A528A0)
DECLARE_EVENT_SOURCE(BSTValueRequestEvent<FaderMenuDisplayState>, 0x02A53760)
DECLARE_EVENT_SOURCE(FavoritesMenu_AssignQuickkey, 0x02A60040)
DECLARE_EVENT_SOURCE(FavoritesMenu_UseQuickkey, 0x02A600D0)
DECLARE_EVENT_SOURCE(LoadingMenu_RefreshText, 0x02A63FFC)
DECLARE_EVENT_SOURCE(MainMenu_ActionCanceled, 0x02A682CC)
DECLARE_EVENT_SOURCE(MainMenu_ActionConfirmed, 0x02A6835C)
DECLARE_EVENT_SOURCE(MainMenu_ConfirmLoad, 0x02A683EC)
DECLARE_EVENT_SOURCE(MainMenu_DeleteSave, 0x02A6847C)
DECLARE_EVENT_SOURCE(MainMenu_SetCharacter, 0x02A685AC)
DECLARE_EVENT_SOURCE(MainMenu_StartAction, 0x02A6863C)
DECLARE_EVENT_SOURCE(MainMenu_StartLoad, 0x02A686CC)
DECLARE_EVENT_SOURCE(MainMenu_UploadSave, 0x02A6875C)
DECLARE_EVENT_SOURCE(BGSAppPausedEvent, 0x02A6A104)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnBackOut, 0x02A6F220)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnButtonPress, 0x02A6F2B0)
DECLARE_EVENT_SOURCE(MessageBoxMenu_OnScriptedButtonPress, 0x02A6F340)
DECLARE_EVENT_SOURCE(SleepWaitMenu_InterruptRest, 0x02A73FA8)
DECLARE_EVENT_SOURCE(SleepWaitMenu_StartRest, 0x02A74038)
DECLARE_EVENT_SOURCE(Spaceship::BoughtEvent, 0x02D4EBF0)
DECLARE_EVENT_SOURCE(Spaceship::ContrabandScanWarningEvent, 0x02D4EC80)
DECLARE_EVENT_SOURCE(Spaceship::DockEvent, 0x02D4ED10)
DECLARE_EVENT_SOURCE(Spaceship::DynamicNavmeshCompleted, 0x02D8B4A0)
DECLARE_EVENT_SOURCE(Spaceship::FarTravelEvent, 0x02D4EE30)
DECLARE_EVENT_SOURCE(Spaceship::LandingEvent, 0x02D4EEC0)
DECLARE_EVENT_SOURCE(Spaceship::PlanetScanEvent, 0x02D4EF50)
DECLARE_EVENT_SOURCE(Spaceship::RampDownEvent, 0x02D4EFE0)
DECLARE_EVENT_SOURCE(Spaceship::RefueledEvent, 0x02D4F070)
DECLARE_EVENT_SOURCE(Spaceship::RegisteredEvent, 0x02D4F100)
DECLARE_EVENT_SOURCE(Spaceship::ShieldEvent, 0x02D4F190)
DECLARE_EVENT_SOURCE(Spaceship::ShipAddedEvent, 0x02D4F220)
DECLARE_EVENT_SOURCE(Spaceship::ShipCollisionEvent, 0x02D4F2B0)
DECLARE_EVENT_SOURCE(Spaceship::ShipCustomizedEvent, 0x02D4F340)
DECLARE_EVENT_SOURCE(Spaceship::SoldEvent, 0x02D4F3D0)
DECLARE_EVENT_SOURCE(Spaceship::SystemDamagedEvent, 0x02D4F460)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerAllocationEvent, 0x02D4F4F0)
DECLARE_EVENT_SOURCE(Spaceship::SystemPowerChangeEvent, 0x02D4F580)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedBIEvent, 0x02D4F610)
DECLARE_EVENT_SOURCE(Spaceship::SystemRepairedEvent, 0x02D4F6A0)
DECLARE_EVENT_SOURCE(Spaceship::TakeDamagEvent, 0x02D4F730)
DECLARE_EVENT_SOURCE(ContextStackChangedEvent, 0x02EC87A4)
DECLARE_EVENT_SOURCE(UpdateSceneRectEvent, 0x030C79A0)
DECLARE_EVENT_SOURCE(GameStalledEvent, 0x03294008)

// more

DECLARE_EVENT_SOURCE(TESCellNavmeshGeneratedEvent, 0x005C7B30)
DECLARE_EVENT_SOURCE(TESHitEvent, 0x005C83C0)
DECLARE_EVENT_SOURCE(FirstThirdPersonSwitch::Event, 0x005C8DB0)
DECLARE_EVENT_SOURCE(PerkChanged::Event, 0x01330B60)
DECLARE_EVENT_SOURCE(TESHarvestEvent::ItemHarvested, 0x0153CA60)
DECLARE_EVENT_SOURCE(ActivityEvents::ActivityCompletedEvent, 0x01544D20)
DECLARE_EVENT_SOURCE(ChallengeCompletedEvent::Event, 0x01547040)
DECLARE_EVENT_SOURCE(InventoryItemEvent::Event, 0x0157F9F0)
DECLARE_EVENT_SOURCE(BooksRead::Event, 0x01992D00)
DECLARE_EVENT_SOURCE(LocationExplored::Event, 0x019CB990)
DECLARE_EVENT_SOURCE(LocationLinked::Event, 0x019CBA00)
DECLARE_EVENT_SOURCE(Activation::Event, 0x01A8E5C0)
DECLARE_EVENT_SOURCE(ActorCellChangeEvent, 0x01AA07A0)
DECLARE_EVENT_SOURCE(ActorHeadAttachedEvent, 0x01AA0810)
DECLARE_EVENT_SOURCE(ActorValueEvents::ActorValueChangedEvent, 0x01AA0880)
DECLARE_EVENT_SOURCE(AliasChangeEvent, 0x01AA08F0)
DECLARE_EVENT_SOURCE(AnimationGraphDependentEvent, 0x01AA0960)
DECLARE_EVENT_SOURCE(BGSAffinityEventEvent, 0x01AA09D0)
DECLARE_EVENT_SOURCE(BGSCellGridLoadEvent, 0x01AA0A40)
DECLARE_EVENT_SOURCE(BGSEventProcessedEvent, 0x01AA0AB0)
DECLARE_EVENT_SOURCE(BGSHavokWorldCreatedEvent, 0x01AA0B20)
DECLARE_EVENT_SOURCE(BGSLocationLoadedEvent, 0x01AA0B90)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompanionDismiss, 0x01AA0C00)
DECLARE_EVENT_SOURCE(BGSOnPlayerCompleteResearchEvent, 0x01AA0C70)
DECLARE_EVENT_SOURCE(BGSOnPlayerCraftItemEvent, 0x01AA0CE0)
DECLARE_EVENT_SOURCE(BGSOnPlayerCreateRobotEvent, 0x01AA0D50)
DECLARE_EVENT_SOURCE(BGSOnPlayerEnterVertibirdEvent, 0x01AA0DC0)
DECLARE_EVENT_SOURCE(BGSOnPlayerFallLongDistances, 0x01AA0E30)
DECLARE_EVENT_SOURCE(BGSOnPlayerFireWeaponEvent, 0x01AA0EA0)
DECLARE_EVENT_SOURCE(BGSOnPlayerHealTeammateEvent, 0x01AA0F10)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringBeginEvent, 0x01AA0F80)
DECLARE_EVENT_SOURCE(BGSOnPlayerLoiteringEndEvent, 0x01AA0FF0)
DECLARE_EVENT_SOURCE(BGSOnPlayerModArmorWeaponEvent, 0x01AA1060)
DECLARE_EVENT_SOURCE(BGSOnPlayerModRobotEvent, 0x01AA10D0)
DECLARE_EVENT_SOURCE(BGSOnPlayerSwimmingEvent, 0x01AA1140)
DECLARE_EVENT_SOURCE(BGSOnPlayerUseWorkBenchEvent, 0x01AA11B0)
DECLARE_EVENT_SOURCE(BGSOnSpeechChallengeAvailable, 0x01AA1220)
DECLARE_EVENT_SOURCE(BGSRadiationDamageEvent, 0x01AA1290)
DECLARE_EVENT_SOURCE(BuilderMenuSelectEvent, 0x01AA1300)
DECLARE_EVENT_SOURCE(CrewAssignedEvent, 0x01AA1370)
DECLARE_EVENT_SOURCE(CrewDismissedEvent, 0x01AA13E0)
DECLARE_EVENT_SOURCE(DestroyedEvent, 0x01AA1450)
DECLARE_EVENT_SOURCE(HomeShipSetEvent, 0x01AA1610)
DECLARE_EVENT_SOURCE(InstantReferenceInteractionEvent, 0x01AA1680)
DECLARE_EVENT_SOURCE(ItemConsumedEvent, 0x01AA16F0)
DECLARE_EVENT_SOURCE(ItemSwappedEvent, 0x01AA1760)
DECLARE_EVENT_SOURCE(LockPickedEvent, 0x01AA17D0)
DECLARE_EVENT_SOURCE(MapMarkerDiscoveredEvent, 0x01AA1840)
DECLARE_EVENT_SOURCE(ObjectScannedEvent, 0x01AA18B0)
DECLARE_EVENT_SOURCE(PlayerAddItemEvent, 0x01AA1920)
DECLARE_EVENT_SOURCE(PlayerArrestedEvent, 0x01AA1990)
DECLARE_EVENT_SOURCE(PlayerAssaultActorEvent, 0x01AA1A00)
DECLARE_EVENT_SOURCE(PlayerBuyShipEvent, 0x01AA1A70)
DECLARE_EVENT_SOURCE(PlayerCrimeGoldEvent, 0x01AA1AE0)
DECLARE_EVENT_SOURCE(PlayerFailedPlotRouteEvent, 0x01AA1B50)
DECLARE_EVENT_SOURCE(PlayerJailEvent, 0x01AA1BC0)
DECLARE_EVENT_SOURCE(PlayerModifiedShipEvent, 0x01AA1C30)
DECLARE_EVENT_SOURCE(PlayerMurderActorEvent, 0x01AA1CA0)
DECLARE_EVENT_SOURCE(PlayerPayFineEvent, 0x01AA1D10)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyCompleteEvent, 0x01AA1D80)
DECLARE_EVENT_SOURCE(PlayerPlanetSurveyProgressEvent, 0x01AA1DF0)
DECLARE_EVENT_SOURCE(PlayerSellShipEvent, 0x01AA1E60)
DECLARE_EVENT_SOURCE(PlayerTrespassEvent, 0x01AA1ED0)
DECLARE_EVENT_SOURCE(QuickContainerOpenedEvent, 0x01AA1F40)
DECLARE_EVENT_SOURCE(RefControlChangedEvent, 0x01AA1FB0)
DECLARE_EVENT_SOURCE(ReferenceDestroyedEvent, 0x01AA2020)
DECLARE_EVENT_SOURCE(SpeechChallengeCompletionEvent, 0x01AA2090)
DECLARE_EVENT_SOURCE(TESActivateEvent, 0x01AA2100)
DECLARE_EVENT_SOURCE(TESActiveEffectApplyFinishEvent, 0x01AA2170)
DECLARE_EVENT_SOURCE(TESActiveEffectRemovedEvent, 0x01AA21E0)
DECLARE_EVENT_SOURCE(TESActorActivatedRefEvent, 0x01AA2250)
DECLARE_EVENT_SOURCE(TESActorLocationChangeEvent, 0x01AA22C0)
DECLARE_EVENT_SOURCE(TESBookReadEvent, 0x01AA2330)
DECLARE_EVENT_SOURCE(TESCellCriticalRefsAttachedEvent, 0x01AA23A0)
DECLARE_EVENT_SOURCE(TESCellFullyLoadedEvent, 0x01AA2410)
DECLARE_EVENT_SOURCE(TESCellGravityChangeEvent, 0x01AA2480)
DECLARE_EVENT_SOURCE(TESCellReadyToApplyDecalsEvent, 0x01AA24F0)
DECLARE_EVENT_SOURCE(TESCellReference3DAttachEvent, 0x01AA2560)
DECLARE_EVENT_SOURCE(TESCellReferenceAttachDetachEvent, 0x01AA25D0)
DECLARE_EVENT_SOURCE(TESCombatEvent, 0x01AA2640)
DECLARE_EVENT_SOURCE(TESCombatListEvent, 0x01AA26B0)
DECLARE_EVENT_SOURCE(TESCommandModeCompleteCommandEvent, 0x01AA2720)
DECLARE_EVENT_SOURCE(TESCommandModeEnterEvent, 0x01AA2790)
DECLARE_EVENT_SOURCE(TESCommandModeExitEvent, 0x01AA2800)
DECLARE_EVENT_SOURCE(TESCommandModeGiveCommandEvent, 0x01AA2870)
DECLARE_EVENT_SOURCE(TESConsciousnessEvent, 0x01AA28E0)
DECLARE_EVENT_SOURCE(TESContainerChangedEvent, 0x01AA2950)
DECLARE_EVENT_SOURCE(TESDeathEvent, 0x01AA29C0)
DECLARE_EVENT_SOURCE(TESDeferredKillEvent, 0x01AA2A30)
DECLARE_EVENT_SOURCE(TESDestructionStageChangedEvent, 0x01AA2AA0)
DECLARE_EVENT_SOURCE(TESEnterBleedoutEvent, 0x01AA2B10)
DECLARE_EVENT_SOURCE(TESEnterSneakingEvent, 0x01AA2B80)
DECLARE_EVENT_SOURCE(TESEquipEvent, 0x01AA2BF0)
DECLARE_EVENT_SOURCE(TESEscortWaitStartEvent, 0x01AA2C60)
DECLARE_EVENT_SOURCE(TESEscortWaitStopEvent, 0x01AA2CD0)
DECLARE_EVENT_SOURCE(TESExitBleedoutEvent, 0x01AA2D40)
DECLARE_EVENT_SOURCE(TESExitFurnitureEvent, 0x01AA2DB0)
DECLARE_EVENT_SOURCE(TESFormDeleteEvent, 0x01AA2E20)
DECLARE_EVENT_SOURCE(TESFormIDRemapEvent, 0x01AA2E90)
DECLARE_EVENT_SOURCE(TESFurnitureEvent, 0x01AA2F00)
DECLARE_EVENT_SOURCE(TESGrabReleaseEvent, 0x01AA2F70)
DECLARE_EVENT_SOURCE(TESInitScriptEvent, 0x01AA2FE0)
DECLARE_EVENT_SOURCE(TESLimbCrippleEvent, 0x01AA3050)
DECLARE_EVENT_SOURCE(TESLoadGameEvent, 0x01AA30C0)
DECLARE_EVENT_SOURCE(TESLocationExploredEvent, 0x01AA3130)
DECLARE_EVENT_SOURCE(TESLockChangedEvent, 0x01AA31A0)
DECLARE_EVENT_SOURCE(TESMagicEffectApplyEvent, 0x01AA3210)
DECLARE_EVENT_SOURCE(TESMissionAcceptedEvent, 0x01AA3280)
DECLARE_EVENT_SOURCE(TESObjectLoadedEvent, 0x01AA32F0)
DECLARE_EVENT_SOURCE(TESObjectREFRTranslationEvent, 0x01AA3360)
DECLARE_EVENT_SOURCE(TESOnPCDialogueTargetEvent, 0x01AA33D0)
DECLARE_EVENT_SOURCE(TESOpenCloseEvent, 0x01AA3440)
DECLARE_EVENT_SOURCE(TESPackageEvent, 0x01AA34B0)
DECLARE_EVENT_SOURCE(TESPerkEntryRunEvent, 0x01AA3520)
DECLARE_EVENT_SOURCE(TESPickNewIdleEvent, 0x01AA3590)
DECLARE_EVENT_SOURCE(TESPickpocketFailedEvent, 0x01AA3600)
DECLARE_EVENT_SOURCE(TESPlayerActiveEffectEvent, 0x01AA3670)
DECLARE_EVENT_SOURCE(TESPlayerFollowerWarpEvent, 0x01AA36E0)
DECLARE_EVENT_SOURCE(TESQuestInitEvent, 0x01AA3750)
DECLARE_EVENT_SOURCE(TESQuestRejectedEvent, 0x01AA37C0)
DECLARE_EVENT_SOURCE(TESQuestStageEvent, 0x01AA3830)
DECLARE_EVENT_SOURCE(TESQuestStageItemDoneEvent, 0x01AA38A0)
DECLARE_EVENT_SOURCE(TESQuestStartStopEvent, 0x01AA3910)
DECLARE_EVENT_SOURCE(TESQuestTimerEvent, 0x01AA3980)
DECLARE_EVENT_SOURCE(TESResetEvent, 0x01AA39F0)
DECLARE_EVENT_SOURCE(TESResolveNPCTemplatesEvent, 0x01AA3A60)
DECLARE_EVENT_SOURCE(TESSceneActionEvent, 0x01AA3AD0)
DECLARE_EVENT_SOURCE(TESSceneEvent, 0x01AA3B40)
DECLARE_EVENT_SOURCE(TESScenePhaseEvent, 0x01AA3BB0)
DECLARE_EVENT_SOURCE(TESSellEvent, 0x01AA3C20)
DECLARE_EVENT_SOURCE(TESSleepStartEvent, 0x01AA3C90)
DECLARE_EVENT_SOURCE(TESSleepStopEvent, 0x01AA3D00)
DECLARE_EVENT_SOURCE(TESSpellCastEvent, 0x01AA3D70)
DECLARE_EVENT_SOURCE(TESSpellCastFailureEvent, 0x01AA3DE0)
DECLARE_EVENT_SOURCE(TESSwitchRaceCompleteEvent, 0x01AA3E50)
DECLARE_EVENT_SOURCE(TESTopicInfoEvent, 0x01AA3EC0)
DECLARE_EVENT_SOURCE(TESTrackedStatsEvent, 0x01AA3F30)
DECLARE_EVENT_SOURCE(TESTrapHitEvent, 0x01AA3FA0)
DECLARE_EVENT_SOURCE(TESTriggerEnterEvent, 0x01AA4010)
DECLARE_EVENT_SOURCE(TESTriggerEvent, 0x01AA4080)
DECLARE_EVENT_SOURCE(TESTriggerLeaveEvent, 0x01AA40F0)
DECLARE_EVENT_SOURCE(TESUniqueIDChangeEvent, 0x01AA41D0)
DECLARE_EVENT_SOURCE(TESWaitStartEvent, 0x01AA4240)
DECLARE_EVENT_SOURCE(TESWaitStopEvent, 0x01AA42B0)
DECLARE_EVENT_SOURCE(TerminalMenuMenuItemRunEvent, 0x01AA4320)
DECLARE_EVENT_SOURCE(TerminalMenuOnEnterEvent, 0x01AA4390)
DECLARE_EVENT_SOURCE(WorkshopNPCTransferEvent, 0x01AA4400)
DECLARE_EVENT_SOURCE(TESObjectREFRIsReadyForAttachEvent, 0x01AA4470)
DECLARE_EVENT_SOURCE(DefaultObjectsReadyEvent::Event, 0x01AD0420)
DECLARE_EVENT_SOURCE(ObjectiveState::Event, 0x01B7D0E0)
DECLARE_EVENT_SOURCE(QuestStatus::Event, 0x01BDEBD0)
DECLARE_EVENT_SOURCE(RefillAliasEvent::Event, 0x01BDEC40)
DECLARE_EVENT_SOURCE(TESQuestEvent::Event, 0x01BDECB0)
DECLARE_EVENT_SOURCE(RolloverIsCrimeEvent::Event, 0x021BBCC0)
DECLARE_EVENT_SOURCE(HideSubtitleEvent::Event, 0x021C70B0)
DECLARE_EVENT_SOURCE(ShowSubtitleEvent::Event, 0x021C7120)
DECLARE_EVENT_SOURCE(MissionMenuStateEvent::Event, 0x02223760)
DECLARE_EVENT_SOURCE(ClearShipHudTarget::Event, 0x02281C90)
DECLARE_EVENT_SOURCE(TryUpdateShipHudTarget::Event, 0x02281D00)
DECLARE_EVENT_SOURCE(LocationTextEvent::Event, 0x022DE600)
DECLARE_EVENT_SOURCE(TraitDiscoveryTextEvent::Event, 0x022DE670)
DECLARE_EVENT_SOURCE(DaysPassed::Event, 0x02579DE0)
DECLARE_EVENT_SOURCE(HourPassed::Event, 0x02579E50)
DECLARE_EVENT_SOURCE(ActorDamage::Event, 0x0265CE20)
DECLARE_EVENT_SOURCE(ActorItemEquipped::Event, 0x0265CE90)
DECLARE_EVENT_SOURCE(ActorKill::Event, 0x0265CF00)
DECLARE_EVENT_SOURCE(AssaultCrime::Event, 0x0265CF70)
DECLARE_EVENT_SOURCE(DisarmedEvent::Event, 0x0265CFE0)
DECLARE_EVENT_SOURCE(FactionRankChange::Event, 0x0265D050)
DECLARE_EVENT_SOURCE(GrandTheftHorse::Event, 0x0265D0C0)
DECLARE_EVENT_SOURCE(MurderCrime::Event, 0x0265D130)
DECLARE_EVENT_SOURCE(PiracyCrime::Event, 0x0265D1A0)
DECLARE_EVENT_SOURCE(Bleedout::Event, 0x0268C510)
DECLARE_EVENT_SOURCE(ContractedDisease::Event, 0x0268C580)
DECLARE_EVENT_SOURCE(ReloadWeaponEvent::Event, 0x0268C5F0)
DECLARE_EVENT_SOURCE(SpellsLearned::Event, 0x0269B8C0)
DECLARE_EVENT_SOURCE(Bounty::Event, 0x0273FCF0)
DECLARE_EVENT_SOURCE(ChestLooted::Event, 0x0273FD60)
DECLARE_EVENT_SOURCE(CriticalHitEvent::Event, 0x0273FDD0)
DECLARE_EVENT_SOURCE(CustomMarkerUpdate::Event, 0x0273FE40)
DECLARE_EVENT_SOURCE(DaysJailed::Event, 0x0273FEB0)
DECLARE_EVENT_SOURCE(EnteredUnity::Event, 0x0273FF20)
DECLARE_EVENT_SOURCE(FinePaid::Event, 0x0273FF90)
DECLARE_EVENT_SOURCE(ItemCrafted::Event, 0x02740000)
DECLARE_EVENT_SOURCE(ItemSteal::Event, 0x02740070)
DECLARE_EVENT_SOURCE(JailEscape::Event, 0x027400E0)
DECLARE_EVENT_SOURCE(Jailing::Event, 0x02740150)
DECLARE_EVENT_SOURCE(LevelIncrease::Event, 0x027401C0)
DECLARE_EVENT_SOURCE(LocationMarkerArrayUpdate::Event, 0x02740230)
DECLARE_EVENT_SOURCE(PlayerActiveEffectChanged::Event, 0x027402A0)
DECLARE_EVENT_SOURCE(PlayerAmmoChanged::Event, 0x02740310)
DECLARE_EVENT_SOURCE(PlayerCharacterQuestEvent::Event, 0x02740380)
DECLARE_EVENT_SOURCE(PlayerDifficultySettingChanged::Event, 0x027403F0)
DECLARE_EVENT_SOURCE(PlayerFastTravel::Event, 0x02740460)
DECLARE_EVENT_SOURCE(PlayerInDialogueChanged::Event, 0x027404D0)
DECLARE_EVENT_SOURCE(PlayerLifeStateChanged::Event, 0x02740540)
DECLARE_EVENT_SOURCE(PlayerPickpocketSuccess::Event, 0x027405B0)
DECLARE_EVENT_SOURCE(PoisonedWeapon::Event, 0x02740620)
DECLARE_EVENT_SOURCE(TerminalHacked::Event, 0x02740690)
DECLARE_EVENT_SOURCE(TravelMarkerStateChange::Event, 0x02740700)
DECLARE_EVENT_SOURCE(WeaponAttack::Event, 0x027407E0)
DECLARE_EVENT_SOURCE(Trespass::Event, 0x027A0170)
DECLARE_EVENT_SOURCE(VATSEvents::ModeChange, 0x0280A8A0)
DECLARE_EVENT_SOURCE(VATSCommand, 0x0280A910)
DECLARE_EVENT_SOURCE(HoursPassed::Event, 0x02A73F40)

// other events
DECLARE_EVENT_SOURCE(RadioManager::PipboyTransmitterDetectionEvent, 0x024EF3B0)
DECLARE_EVENT_SOURCE_EX(XPChange::Event, 0x06077E00)
DECLARE_EVENT_SOURCE_EX(WeaponFiredEvent, 0x0606A528)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::Event, 0x06A4BDF0)
DECLARE_EVENT_SOURCE_EX(ActorEquipManagerEvent::SpellEvent, 0x06A4BE18)
DECLARE_EVENT_SOURCE_EX(AttachReference::Event, 0x06077DD8)
