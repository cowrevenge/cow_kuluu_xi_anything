/* f_0x100afb00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100afb00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100afb00(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    switch(param_2) {
      case 0x7fffffc0:
      case 0x7ffffff0:
      case 0x7ffffff9:
        iVar2 = cow_bridge_100fc510(g, COW_IMG(COW_ADDR_LIFT_100AFB28), 0u, (const CowU32[]){ 0u }, param_1, g->edx, param_2, 0u);
        wr32((uint32_t)param_3, rd32((uint32_t)(iVar2 + 4)));
        uVar1 = cow_bridge_100fc2e0(g, COW_IMG(COW_ADDR_LIFT_100AFB36), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_2, 0u);
        goto L_100afbd8;
      case 0x7fffffc1:
      case 0x7fffffc2:
      case 0x7fffffc3:
      case 0x7fffffc4:
      case 0x7fffffc5:
        iVar2 = param_2 + 0x40;
        goto L_100afb8b;
      case 0x7fffffc6:
      case 0x7fffffc7:
      case 0x7fffffc8:
      case 0x7fffffc9:
      case 0x7fffffca:
      case 0x7fffffcb:
        iVar2 = param_2 + 0x44;
        goto L_100afb8b;
      case 0x7fffffcc:
      case 0x7fffffcd:
      case 0x7fffffce:
      case 0x7fffffcf:
      case 0x7fffffd0:
      case 0x7fffffd1:
        iVar2 = param_2 + 0x48;
    L_100afb8b:
        iVar2 = cow_bridge_100e8df0(g, COW_IMG(COW_ADDR_LIFT_100AFB91), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, param_2, 4u);
        break;
      default:
        if ((param_2 & 0xff000000) == 0) {
          wr32((uint32_t)param_3, rd32((uint32_t)(param_1 + 8)));
          wr16((uint32_t)param_4, rd16((uint32_t)(param_1 + 2)));
          goto L_100afbdf;
        }
        wr32((uint32_t)param_3, param_2);
        uVar1 = (CowU16)param_2 & 0x3ff;
    L_100afbd8:
        wr16((uint32_t)param_4, uVar1);
        goto L_100afbdf;
      case 0x7ffffff1:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AFB42), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, param_2, 0u);
        break;
      case 0x7ffffff2:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AFB4B), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, param_2, 0u);
        break;
      case 0x7ffffff3:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AFB54), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, param_2, 0u);
        break;
      case 0x7ffffff4:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AFB5D), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, param_2, 0u);
        break;
      case 0x7ffffff5:
        iVar2 = cow_bridge_100ae9e0(g, COW_IMG(COW_ADDR_LIFT_100AFB66), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, param_2, 0u);
        break;
      case 0x7ffffff8:
        wr32((uint32_t)param_3, rd32((uint32_t)(param_1 + 8)));
        wr16((uint32_t)param_4, rd16((uint32_t)(param_1 + 2)));
        goto L_100afbdf;
      }
      if (iVar2 == 0) {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)param_3, rd32((uint32_t)(iVar2 + 0x14)));
      wr16((uint32_t)param_4, rd16((uint32_t)(iVar2 + 0x18)));
    L_100afbdf:
      if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)param_4)))) == 0) {
        g->eax = (CowU32)(0); return;
      }
      iVar2 = cow_bridge_1008b380(g, COW_IMG(COW_ADDR_LIFT_100AFBFD), 1u, (const CowU32[]){ rd32((uint32_t)param_3) }, g->ecx, g->edx, param_2, 0u);
      g->eax = (CowU32)(iVar2 != 0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100afb00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x100afb00: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100afb04: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->eax + 0x80000040u)); }   /* 0x100afb05: register esi, replayed as the entry ran it */
    cow_lift_100afb00(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
