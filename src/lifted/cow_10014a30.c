/* f_0x10014a30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10014a30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10014a30(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    CowU32 uVar3;
    sVar1 = (int16_t)rd16((uint32_t)(param_1 + 4));
      uVar3 = (CowU32)sVar1;
      switch(sVar1) {
      case 0:
        uVar3 = cow_bridge_10014c90(g, COW_IMG(COW_ADDR_LIFT_10014A4A), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        if ((char)uVar3 == '\0') goto switchD_10014a3c_default;
        break;
      case 1:
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24));
        wr32((uint32_t)(param_1 + 0x24), iVar2 + -1);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = cow_bridge_100f76d0(g, COW_IMG(COW_ADDR_LIFT_10014A71), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
          if ((char)uVar3 == '\x01') {
            wr16((uint32_t)(param_1 + 4), (int16_t)rd16((uint32_t)(param_1 + 4)) + 1);
            wr32((uint32_t)(param_1 + 0x24), 900);
            g->eax = (CowU32)(uVar3 & 0xffffff00); return;
          }
          goto switchD_10014a3c_default;
        }
        break;
      case 2:
        iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x24));
        wr32((uint32_t)(param_1 + 0x24), iVar2 + -1);
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = cow_bridge_100f10f0(g, COW_IMG(COW_ADDR_LIFT_10014A99), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (uVar3 == 0) {
            wr16((uint32_t)(param_1 + 4), (int16_t)rd16((uint32_t)(param_1 + 4)) + 1);
            g->eax = (CowU32)(0); return;
          }
          goto switchD_10014a3c_default;
        }
        goto L_10014a55;
      case 3:
        wr32((uint32_t)(param_1 + 0x44), 0xe);
        wr8((uint32_t)(param_1 + 10), 0);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)((char)((CowU16)sVar1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
      default:
        goto switchD_10014a3c_default;
      }
      wr32((uint32_t)(param_1 + 0x24), 900);
    L_10014a55:
      wr16((uint32_t)(param_1 + 4), (int16_t)rd16((uint32_t)(param_1 + 4)) + 1);
    switchD_10014a3c_default:
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar3 & 0xffffff00) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10014a30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10014a30: push esi */
    g->esi = g->ecx;   /* 0x10014a31: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10014a33: register eax, replayed as the entry ran it */
    cow_lift_10014a30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
