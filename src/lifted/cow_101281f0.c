/* f_0x101281f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101281f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101281f0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 bVar2;
    cVar1 = (char)param_3;
      switch(param_2) {
      case 1:
      case 9:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64020)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64020), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64020), 100);
        }
        wr16((uint32_t)(param_1 + 0x64032), (int16_t)rd16((uint32_t)(param_1 + 0x64032)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 2:
      case 3:
      case 10:
      case 0xb:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64021)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64021), bVar2);
        if (99 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64021), 100);
        }
        wr16((uint32_t)(param_1 + 0x64036), (int16_t)rd16((uint32_t)(param_1 + 0x64036)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 4:
      case 0xc:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64022)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64022), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64022), 100);
        }
        wr16((uint32_t)(param_1 + 0x64034), (int16_t)rd16((uint32_t)(param_1 + 0x64034)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 5:
      case 0xd:
      case 0xd2:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64023)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64023), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64023), 100);
        }
        wr16((uint32_t)(param_1 + 0x6402e), (int16_t)rd16((uint32_t)(param_1 + 0x6402e)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 6:
      case 0xe:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64024)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64024), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64024), 100);
        }
        wr16((uint32_t)(param_1 + 0x64030), (int16_t)rd16((uint32_t)(param_1 + 0x64030)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 0xd3:
      case 0xd4:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64027)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64027), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64027), 100);
        }
        wr16((uint32_t)(param_1 + 0x64038), (int16_t)rd16((uint32_t)(param_1 + 0x64038)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 0xd5:
      case 0xd6:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64025)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64025), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64025), 100);
        }
        wr16((uint32_t)(param_1 + 0x6403a), (int16_t)rd16((uint32_t)(param_1 + 0x6403a)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 0xdb:
      case 0xdc:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64028)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64028), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64028), 100);
        }
        wr16((uint32_t)(param_1 + 0x6403e), (int16_t)rd16((uint32_t)(param_1 + 0x6403e)) + param_3);
        wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
        wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
        return;
      case 0xdd:
      case 0xde:
        bVar2 = (int8_t)rd8((uint32_t)(param_1 + 0x64029)) + cVar1;
        wr8((uint32_t)(param_1 + 0x64029), bVar2);
        if (100 < bVar2) {
          wr8((uint32_t)(param_1 + 0x64029), 100);
        }
        wr16((uint32_t)(param_1 + 0x64040), (int16_t)rd16((uint32_t)(param_1 + 0x64040)) + param_3);
      }
      wr16((uint32_t)(param_1 + 0x6402c), (int16_t)rd16((uint32_t)(param_1 + 0x6402c)) + param_3);
      wr16((uint32_t)(param_1 + 0x6403c), (int16_t)rd16((uint32_t)(param_1 + 0x6403c)) + param_3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101281f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x101281f0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101281f4: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x101281f5: register eax, replayed as the entry ran it */
    { g->esi = (uint32_t)((uint32_t)(g->eax + 0xFFFFFFFFu)); }   /* 0x101281fa: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->eax = (uint32_t)(rd32(A)); }   /* 0x101281fd: register eax, replayed as the entry ran it */
    cow_lift_101281f0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
