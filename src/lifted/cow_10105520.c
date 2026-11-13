/* f_0x10105520 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10105520 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10105520(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    CowU32 uVar3;
    int iVar4;
    char cVar5;
    cVar5 = '\0';
      cVar2 = rd8((uint32_t)param_2);
      if (cVar2 != '\0') {
        if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
          uVar3 = (CowU8)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + 4u * (uint32_t)(cVar2 * 2))) & 8;
        }
        else {
          uVar3 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_10105547), 2u, (const CowU32[]){ (int)cVar2, 8 }, g->ecx, g->edx, g->eax, 8u);
        }
        if (uVar3 == 0) {
          if (rd8((uint32_t)param_2) == '\"') {
            cVar5 = '\"';
            param_2 = param_2 + 1;
          }
          cVar2 = rd8((uint32_t)param_2);
          while ((cVar2 != '\0' && (cVar5 != cVar2))) {
            if (cVar5 == '\0') {
              if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
                uVar3 = (CowU8)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + 4u * (uint32_t)(cVar2 * 2))) & 8;
              }
              else {
                uVar3 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_10105591), 2u, (const CowU32[]){ (int)cVar2, 8 }, g->ecx, g->edx, g->eax, 8u);
              }
              if (uVar3 != 0) break;
            }
            if (rd8((uint32_t)param_3) == '\0') {
              g->eax = (CowU32)((CowU32)0x0); return;
            }
            iVar4 = cow_bridge_10313bb4(g, COW_IMG(COW_ADDR_LIFT_101055B7), 1u, (const CowU32[]){ (int)rd8((uint32_t)param_2) }, g->ecx, g->edx, g->eax, 0u);
            if (iVar4 != rd8((uint32_t)param_3)) {
              g->eax = (CowU32)((CowU32)0x0); return;
            }
            pcVar1 = param_2 + 1;
            param_2 = param_2 + 1;
            param_3 = param_3 + 1;
            cVar2 = rd8((uint32_t)pcVar1);
          }
          if (rd8((uint32_t)param_3) == '\0') {
            if ((cVar5 == '\0') || (rd8((uint32_t)param_2) == '\0')) {
              g->eax = (CowU32)(param_2); return;
            }
            g->eax = (CowU32)(param_2 + 1); return;
          }
        }
      }
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10105520(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10105520: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10105521: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10105522: register esi, replayed as the entry ran it */
    { uint8_t a = (uint8_t)g->ebx; uint8_t b = (uint8_t)(uint8_t)g->ebx; uint8_t r = (uint8_t)(a ^ b); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x10105526: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10105528: push edi */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10105529: register eax, replayed as the entry ran it */
    cow_lift_10105520(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
