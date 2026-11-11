/* f_0x102c26c3 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c26c3 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c26c3(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 pcVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    bVar1 = rd8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(2)));
      if ((bVar1 & 2) != 0) {
        iVar6 = rd32((uint32_t)param_1);
        if (rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          if (bVar1 == 2) {
            iVar7 = 3;
          }
          else {
            if (bVar1 != 6) {
              return;
            }
            iVar7 = 4;
          }
          if (iVar6 != 0) {
            pcVar2 = (CowU32)(param_2 + 2);
            do {
              wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(-2)), rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(-2))) + rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(-1))));
              wr8((uint32_t)pcVar2, rd8((uint32_t)pcVar2) + rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(-1))));
              pcVar2 = pcVar2 + iVar7;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else if (rd8((uint32_t)((int)param_1 + 9)) == '\x10') {
          if (bVar1 == 2) {
            param_1 = (CowU32)0x6;
          }
          else {
            if (bVar1 != 6) {
              return;
            }
            param_1 = (CowU32)0x8;
          }
          if (iVar6 != 0) {
            puVar3 = (CowU32)(param_2 + 1);
            do {
              uVar5 = (CowU32)(((uint32_t)(rd8((uint32_t)(puVar3 + 1u * (uint32_t)(3)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar3 + 1u * (uint32_t)(4)))) & 0xffu)) + (CowU32)(((uint32_t)(rd8((uint32_t)(puVar3 + 1u * (uint32_t)(1)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar3 + 1u * (uint32_t)(2)))) & 0xffu)) & 0xffff
              ;
              uVar4 = (CowU32)(((uint32_t)(rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)puVar3)) & 0xffu)) + (CowU32)(((uint32_t)(rd8((uint32_t)(puVar3 + 1u * (uint32_t)(1)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(puVar3 + 1u * (uint32_t)(2)))) & 0xffu)) & 0xffff;
              wr8((uint32_t)puVar3, (char)uVar4);
              wr8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)), (char)(uVar4 >> 8));
              wr8((uint32_t)(puVar3 + 1u * (uint32_t)(3)), (char)(uVar5 >> 8));
              wr8((uint32_t)(puVar3 + 1u * (uint32_t)(4)), (char)uVar5);
              puVar3 = puVar3 + (int)param_1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx, edi, ebp], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c26c3(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c26c3: push ebp */
    g->ebp = g->esp;                       /* 0x102c26c4: mov ebp, esp */
    g->eax = param_3;   /* 0x102c26c6: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c26c9: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102c26ca: register ecx, replayed as the entry ran it */
    cow_lift_102c26c3(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
