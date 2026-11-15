/* f_0x101d5e50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d5e50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d5e50(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 puVar3;
    int iVar4;
    cVar1 = cow_bridge_101ced80(g, COW_IMG(COW_ADDR_LIFT_101D5E61), 1u, (const CowU32[]){ param_2 }, rd32((uint32_t)((int)param_1 + 0x14)), g->edx, g->eax, 0u);
      wr8((uint32_t)(param_2 + 0x2f), cVar1);
      if (cVar1 != '\0') {
        puVar3 = (CowU32)((int)param_1 + 0x4c);
        iVar2 = 2;
        do {
          iVar4 = 0x51;
          do {
            if ((CowU32)rd32((uint32_t)puVar3) != (CowU32)0x0) {
              cow_bridge_101cea70(g, COW_IMG(COW_ADDR_LIFT_101D5E82), 0u, (const CowU32[]){ 0u }, (CowU32)rd32((uint32_t)puVar3), g->edx, g->eax, 0u);
            }
            puVar3 = puVar3 + 4u * (uint32_t)(1);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        cow_bridge_101d5e40(g, COW_IMG(COW_ADDR_LIFT_101D5E92), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx, esi, ebp], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d5e50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101d5e50: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d5e51: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x101d5e52: register esi, replayed as the entry ran it */
    g->ebp = g->ecx;   /* 0x101d5e56: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebp + 0x14u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101d5e59: register ecx, replayed as the entry ran it */
    cow_lift_101d5e50(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
