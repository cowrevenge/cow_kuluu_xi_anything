/* f_0x100a4430 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a4430 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a4430(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    cow_bridge_100d7240(g, COW_IMG(COW_ADDR_LIFT_100A444A), 3u, (const CowU32[]){ param_2, param_3, param_4 }, param_1, g->edx, param_4, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1032D710));
      if (param_5 == (CowU32)0x0) {
        param_5 = (CowU32)(param_3 + 0x250);
      }
      cVar1 = rd8((uint32_t)param_5);
      if ((CowU32)rd8((uint32_t)((int)param_1 + 0xa0c)) != (int)cVar1) {
        wr16((uint32_t)((int)param_1 + 0xa10), rd16((uint32_t)((int)param_1 + 0xa10)) | 1);
        wr8((uint32_t)((int)param_1 + 0xa0c), cVar1);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa12)) != (int16_t)rd16((uint32_t)(param_5 + 2))) {
        wr16((uint32_t)((int)param_1 + 0xa12), (int16_t)rd16((uint32_t)(param_5 + 2)));
        wr16((uint32_t)((int)param_1 + 0xa0e), rd16((uint32_t)((int)param_1 + 0xa0e)) | 1);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa14)) != (int16_t)rd16((uint32_t)(param_5 + 4))) {
        wr16((uint32_t)((int)param_1 + 0xa14), (int16_t)rd16((uint32_t)(param_5 + 4)));
        wr8((uint32_t)((int)param_1 + 0xa0e), rd8((uint32_t)((int)param_1 + 0xa0e)) | 2);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa16)) != (int16_t)rd16((uint32_t)(param_5 + 6))) {
        wr16((uint32_t)((int)param_1 + 0xa16), (int16_t)rd16((uint32_t)(param_5 + 6)));
        wr8((uint32_t)((int)param_1 + 0xa0e), rd8((uint32_t)((int)param_1 + 0xa0e)) | 4);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa18)) != (int16_t)rd16((uint32_t)(param_5 + 8))) {
        wr16((uint32_t)((int)param_1 + 0xa18), (int16_t)rd16((uint32_t)(param_5 + 8)));
        wr8((uint32_t)((int)param_1 + 0xa0e), rd8((uint32_t)((int)param_1 + 0xa0e)) | 8);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa1a)) != (int16_t)rd16((uint32_t)(param_5 + 10))) {
        wr16((uint32_t)((int)param_1 + 0xa1a), (int16_t)rd16((uint32_t)(param_5 + 10)));
        wr8((uint32_t)((int)param_1 + 0xa0e), rd8((uint32_t)((int)param_1 + 0xa0e)) | 0x10);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa1c)) != (int16_t)rd16((uint32_t)(param_5 + 0xc))) {
        wr16((uint32_t)((int)param_1 + 0xa1c), (int16_t)rd16((uint32_t)(param_5 + 0xc)));
        wr8((uint32_t)((int)param_1 + 0xa0e), rd8((uint32_t)((int)param_1 + 0xa0e)) | 0x20);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa1e)) != (int16_t)rd16((uint32_t)(param_5 + 0xe))) {
        wr16((uint32_t)((int)param_1 + 0xa1e), (int16_t)rd16((uint32_t)(param_5 + 0xe)));
        wr8((uint32_t)((int)param_1 + 0xa0e), rd8((uint32_t)((int)param_1 + 0xa0e)) | 0x40);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa20)) != (int16_t)rd16((uint32_t)(param_5 + 0x10))) {
        wr16((uint32_t)((int)param_1 + 0xa20), (int16_t)rd16((uint32_t)(param_5 + 0x10)));
        wr8((uint32_t)((int)param_1 + 0xa0e), rd8((uint32_t)((int)param_1 + 0xa0e)) | 0x80);
      }
      if ((int16_t)rd16((uint32_t)((int)param_1 + 0xa22)) != (int16_t)rd16((uint32_t)(param_5 + 0x12))) {
        wr16((uint32_t)((int)param_1 + 0xa22), (int16_t)rd16((uint32_t)(param_5 + 0x12)));
        wr8((uint32_t)((int)param_1 + 0xa0f), rd8((uint32_t)((int)param_1 + 0xa0f)) | 1);
      }
      cow_bridge_100d4330(g, COW_IMG(COW_ADDR_LIFT_100A457F), 1u, (const CowU32[]){ 0xffffffff }, param_1, g->edx, param_4, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a4430(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_4;   /* 0x100a4430: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a4434: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100a4435: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100a4436: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x100a443a: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100a443c: register ecx, replayed as the entry ran it */
    g->ecx = g->esi;   /* 0x100a4443: the value the entry loaded and the decompiler dropped */
    cow_lift_100a4430(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
