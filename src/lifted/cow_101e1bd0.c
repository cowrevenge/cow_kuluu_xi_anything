/* f_0x101e1bd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e1bd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e1bd0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    piVar1 = (CowU32)rd32((uint32_t)param_1);
      do {
        if (piVar1 == (CowU32)0x0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
        if (rd32((uint32_t)piVar1) != 0) {
          cVar2 = cow_bridge_101e25b0(g, COW_IMG(COW_ADDR_LIFT_101E1BF1), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar2 != '\0') {
            cow_bridge_101e2660(g, COW_IMG(COW_ADDR_LIFT_101E1BFD), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
          }
          cVar3 = cow_bridge_101e2600(g, COW_IMG(COW_ADDR_LIFT_101E1C07), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar3 != '\0') {
            cow_bridge_101e2660(g, COW_IMG(COW_ADDR_LIFT_101E1C13), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
          }
          cVar4 = cow_bridge_101e2550(g, COW_IMG(COW_ADDR_LIFT_101E1C1D), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar4 != '\0') {
            if (rd8((uint32_t)(param_2 + 5)) < '\0') {
              cow_bridge_101e2660(g, COW_IMG(COW_ADDR_LIFT_101E1C44), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->eax, 0u);
            }
            else if ((-1 < rd8((uint32_t)((int)piVar1 + 5))) &&
                    (rd8((uint32_t)((int)piVar1 + 5)) < rd8((uint32_t)(param_2 + 5)))) {
              cow_bridge_101e2660(g, COW_IMG(COW_ADDR_LIFT_101E1C59), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->eax, 0u);
              wr8((uint32_t)(param_2 + 5), rd8((uint32_t)((int)piVar1 + 5)));
            }
            if ((rd16((uint32_t)(piVar1 + 2)) & 0x8000) != 0) {
              wr8((uint32_t)(param_2 + 9), rd8((uint32_t)(param_2 + 9)) | 0x80);
            }
            cow_bridge_101e1eb0(g, COW_IMG(COW_ADDR_LIFT_101E1C79), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
          }
          if (cVar3 != '\0' || cVar2 != '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
          }
        }
        piVar1 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(8)));
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e1bd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101e1bd0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e1bd1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e1bd2: push esi */
    { uint32_t A = (uint32_t)(g->ecx); g->esi = (uint32_t)(rd32(A)); }   /* 0x101e1bd3: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e1bd5: push edi */
    cow_lift_101e1bd0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
