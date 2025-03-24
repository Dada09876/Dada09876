// override the plugin recipe manager class
modded class PluginRecipesManager
{
  // override the register recipes method
  override void RegisterRecipies()
  {
    // call super so the "vanilla" code is called first
    super.RegisterRecipies();
    // an example of registering a recipe you created

    //Tailored Clothes

    RegisterRecipe(new Craft_tlr_PJTop);
  };
};
