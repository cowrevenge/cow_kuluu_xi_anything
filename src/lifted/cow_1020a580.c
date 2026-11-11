/* f_0x1020a580 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1020a580 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1020a580(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU8 bVar3;
    int iVar4;
    if (((((short)param_1 == 8) && (rd32(COW_IMG(COW_ADDR_LIFT_106644E4)) != (CowU32)0x0)) && (-1 < rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_106644E4))))) &&
         (((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106644E4)) + 4u * (uint32_t)(7))) != 0 && (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106644E4)) + 4u * (uint32_t)(8))) != 0)) && (iVar4 = 0, 0 < rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_106644E4))))))) {
        iVar2 = 0;
        do {
          iVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106644E4)) + 4u * (uint32_t)(7))) + iVar2;
          if ((rd8((uint32_t)(iVar1 + 0x50)) & 1) == 1) {
            bVar3 = rd8((uint32_t)(iVar1 + 0x50)) & 0xfe;
          }
          else {
            bVar3 = rd8((uint32_t)(iVar1 + 0x50)) | 1;
          }
          wr8((uint32_t)(iVar1 + 0x50), bVar3);
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 0x54;
        } while (iVar4 < rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_106644E4))));
      }
      cow_bridge_101f6c70(g, COW_IMG(COW_ADDR_LIFT_1020A5ED), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1020a580(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1020a580: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1020a581: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1020a585: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1020a586: push edi */
    cow_lift_1020a580(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
