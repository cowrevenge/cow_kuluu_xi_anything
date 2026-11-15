/* f_0x101dc880 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101dc880 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101dc880(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    if (param_3 == (CowU32)0x0) {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663470))))) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101DC898), 1u, (const CowU32[]){ param_2 }, g->edi, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x58), rd32(COW_IMG(COW_ADDR_LIFT_10663470)));
      }
      else {
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x58u))), COW_IMG(COW_ADDR_LIFT_101DC8AD), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x58), param_3);
      }
      wr8((uint32_t)(param_1 + 0x72), 0);
      uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x58u))))) + 0x54u))), COW_IMG(COW_ADDR_LIFT_101DC8C2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      switch(uVar2) {
      case 0:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E2C)));
        break;
      default:
        uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10666E30));
        goto L_101dc97c;
      case 2:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E34)));
        break;
      case 4:
        uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10666E3C));
        goto L_101dc97c;
      case 5:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E40)));
        break;
      case 6:
        uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10666E44));
        goto L_101dc97c;
      case 7:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E48)));
        break;
      case 8:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E4C)));
        break;
      case 9:
        uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10666E6C));
        goto L_101dc97c;
      case 10:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E50)));
        break;
      case 0xb:
        uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10666E54));
        goto L_101dc97c;
      case 0xc:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E58)));
        break;
      case 0xd:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E5C)));
        break;
      case 0xe:
        uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10666E60));
    L_101dc97c:
        wr32((uint32_t)(param_1 + 0x5c), uVar2);
        break;
      case 0xf:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E64)));
        break;
      case 0x10:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E68)));
        break;
      case 0x11:
        wr32((uint32_t)(param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_10666E70)));
      }
      cow_bridge_101f6700(g, COW_IMG(COW_ADDR_LIFT_101DC988), 1u, (const CowU32[]){ 10u }, g->ecx, g->edx, g->eax, 0u);
      iVar1 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if ((((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) & 0x80) == 0) || ((iVar1 != 2 && (iVar1 != 3)))) &&
         (iVar1 == 0)) {
        wr32((uint32_t)(param_1 + 0x30), COW_IMG(COW_ADDR_LIFT_1037EF84));
      }
      else {
        wr32((uint32_t)(param_1 + 0x30), COW_IMG(COW_ADDR_LIFT_1037EF8C));
      }
      wr16((uint32_t)(param_1 + 0x16), 3);
      wr16((uint32_t)(param_1 + 0x26), 0x12);
      wr8((uint32_t)(param_1 + 0x47), 0);
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101DC9DA), 3u, (const CowU32[]){ 272101420u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101dc880(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101dc880: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101dc881: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x101dc882: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x101dc886: the value the entry loaded and the decompiler dropped */
    cow_lift_101dc880(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
