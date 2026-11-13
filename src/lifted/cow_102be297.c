/* f_0x102be297 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102be297 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102be297(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, int32_t param_4, double param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    if (param_3 == 0) {
        cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102BE2B1), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C7FA4) }, param_1, g->edx, g->eax, 0u);
      }
      else {
        wr8((uint32_t)(param_1 + 0x70), rd8((uint32_t)(param_1 + 0x70)) | 0x80);
        cow_bridge_103169e0(g, COW_IMG(COW_ADDR_LIFT_102BE2CE), 3u, (const CowU32[]){ param_1 + 0x138, param_2, 10 }, g->ecx, g->edx, g->eax, 0u);
        wrf32((uint32_t)(param_1 + 0x134), (float)param_5);
        wr8((uint32_t)(param_1 + 0x130), (char)param_3);
        wr32((uint32_t)(param_1 + 0x70), rd32((uint32_t)(param_1 + 0x70)) | -(CowU32)(param_4 != 0) & 0x100);
        if (param_4 == 0) {
          if ((int16_t)rd16((uint32_t)(param_2 + 2)) != (int16_t)rd16((uint32_t)(param_2 + 4))) {
            return;
          }
          if ((int16_t)rd16((uint32_t)(param_2 + 2)) != (int16_t)rd16((uint32_t)(param_2 + 6))) {
            return;
          }
        }
        else if ((rd8((uint32_t)(param_1 + 0x126)) & 2) != 0) {
          return;
        }
        wr8((uint32_t)(param_1 + 0x69), rd8((uint32_t)(param_1 + 0x69)) | 8);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102be297(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    double param_5 = rdf64((uint32_t)(sp0 + 4u + 0xcu));   /* double argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102be297: push ebp */
    g->ebp = g->esp;                       /* 0x102be298: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102be29a: push ebx */
    g->ebx = param_4;   /* 0x102be29b: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102be29e: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102be29f: push edi */
    cow_lift_102be297(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
