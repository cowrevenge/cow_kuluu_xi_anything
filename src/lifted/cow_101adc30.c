/* f_0x101adc30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101adc30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101adc30(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    switch(param_2) {
      case 2:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD24);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad24)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 3:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD98);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad98)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 4:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD2C);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad2c)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 5:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ADA4);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ada4)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 6:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD84);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad84)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 7:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ADD4);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037add4)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 8:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ADC8);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037adc8)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 9:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ADC0);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037adc0)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 10:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ADB4);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037adb4)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        break;
      case 0xb:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD60);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad60)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 0xc:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD70);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad70)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 0xe:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD50);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad50)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      case 0xf:
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD3C);
        do {
          cVar1 = rd8((uint32_t)pcVar2);
          wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x1037ad3c)), cVar1);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        return;
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101adc30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_3;   /* 0x101adc30: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFEu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x101adc34: register eax, replayed as the entry ran it */
    cow_lift_101adc30(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
