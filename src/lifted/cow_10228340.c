/* f_0x10228340 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10228340 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10228340(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int local_4;
    local_4 = -1;
      if (rd8((uint32_t)(param_1 + 4)) == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(-1) & 0xffu)); return;
      }
      iVar2 = -1;
      iVar3 = 0;
      do {
        iVar1 = cow_bridge_10227110(g, COW_IMG(COW_ADDR_LIFT_10228372), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 < 0) {
          if (iVar2 == -1) {
            iVar2 = iVar3;
          }
        }
        else {
          iVar1 = cow_bridge_10227110(g, COW_IMG(COW_ADDR_LIFT_10228384), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar1 == param_2) {
            iVar1 = cow_bridge_102270e0(g, COW_IMG(COW_ADDR_LIFT_102283A1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if ((iVar1 == 0) && (iVar1 = cow_bridge_102272b0(g, COW_IMG(COW_ADDR_LIFT_102283B2), 2u, (const CowU32[]){ g->ecx, param_2 }, g->ecx, g->edx, g->eax, 0u), iVar1 < 1)) {
              iVar2 = iVar3;
            }
            else {
              local_4 = iVar3;
              if (-1 < iVar3) {
                wr8((uint32_t)(iVar3 + 0x208 + param_1), 1);
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(iVar3) & 0xffu)); return;
              }
            }
            break;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x20);
      if (iVar2 == -1) {
        iVar2 = 0;
        do {
          if (rd8((uint32_t)(param_1 + 0x208 + iVar2)) == '\0') {
            cow_bridge_102270b0(g, COW_IMG(COW_ADDR_LIFT_102283F2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(local_4); return;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x20);
        g->eax = (CowU32)(local_4); return;
      }
      iVar3 = cow_bridge_102272b0(g, COW_IMG(COW_ADDR_LIFT_10228414), 2u, (const CowU32[]){ iVar2 * 0x10 + 8 + param_1, param_2 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 < 1) {
        g->eax = (CowU32)(local_4); return;
      }
      wr8((uint32_t)(iVar2 + 0x208 + param_1), 1);
      g->eax = (CowU32)(iVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10228340(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10228340: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10228341: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10228342: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10228343: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10228344: push edi */
    g->edi = g->ecx;   /* 0x10228345: the value the entry loaded and the decompiler dropped */
    cow_lift_10228340(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
