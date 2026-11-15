/* f_0x100ddf60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ddf60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ddf60(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 local_40[14];
    CowU32 local_8;
    CowU32 local_4;
    local_8 = rd32((uint32_t)param_1);
      local_4 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      uVar1 = local_8 >> 3 & 0x3f;
      iVar4 = 0x38;
      if (0x37 < uVar1) {
        iVar4 = 0x78;
      }
      cow_bridge_100ddec0(g, COW_IMG(COW_ADDR_LIFT_100DDF99), 3u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_10361388), iVar4 - uVar1 }, g->ecx, g->edx, g->eax, 12u);
      uVar1 = 0;
      puVar2 = (CowU32)((int)param_1 + 0x1a);
      do {
        local_40[uVar1] =
             (((uint32_t)((((uint32_t)(rd16((uint32_t)puVar2)) & 0xffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)puVar2 + -1))) & 0xffu))) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar2 + 2u * (uint32_t)(-1)))) & 0xffu));
        uVar1 = uVar1 + 1;
        puVar2 = puVar2 + 2u * (uint32_t)(2);
      } while (uVar1 < 0xe);
      cow_bridge_100de010(g, COW_IMG(COW_ADDR_LIFT_100DDFD7), 2u, (const CowU32[]){ param_1 + 4u * (uint32_t)(2), local_40 }, g->ecx, g->edx, g->eax, 8u);
      puVar5 = (CowU32)((int)param_1 + 0x59);
      iVar4 = 4;
      puVar3 = (CowU32)((int)param_1 + 10);
      do {
        wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-2))));
        wr8((uint32_t)puVar5, rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-1))));
        wr8((uint32_t)(puVar5 + 1u * (uint32_t)(1)), rd8((uint32_t)puVar3));
        wr8((uint32_t)(puVar5 + 1u * (uint32_t)(2)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(1))));
        puVar5 = puVar5 + 4;
        iVar4 = iVar4 + -1;
        puVar3 = puVar3 + 4;
      } while (iVar4 != 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 64 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ddf60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x40u;                      /* 0x100ddf60: 64 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ddf63: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100ddf64: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x4Cu); g->edi = (uint32_t)(rd32(A)); }   /* 0x100ddf65: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->eax = (uint32_t)(rd32(A)); }   /* 0x100ddf69: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x4u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100ddf6b: register ecx, replayed as the entry ran it */
    cow_lift_100ddf60(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
