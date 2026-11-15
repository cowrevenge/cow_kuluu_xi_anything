/* f_0x10311ef0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10311ef0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10311ef0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    CowU32 pcVar2;
    char cVar3;
    CowU32 puVar4;
    CowU32 uVar5;
    char cVar6;
    CowU32 uVar7;
    CowU32 pcVar8;
    CowU32 uVar9;
    CowU32 puVar10;
    cVar3 = rd8((uint32_t)param_2);
      if (cVar3 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(param_1) & 0xffu)); return;
      }
      if (rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) == '\0') {
        while (((CowU32)param_1 & 3) != 0) {
          uVar5 = rd32((uint32_t)param_1);
          if ((char)uVar5 == cVar3) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(param_1) & 0xffu)); return;
          }
          param_1 = (CowU32)((int)param_1 + 1);
          if ((char)uVar5 == '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
          }
        }
        while( 1 ) {
          while( 1 ) {
            uVar5 = rd32((uint32_t)param_1);
            uVar9 = uVar5 ^ (((uint32_t)((((uint32_t)(cVar3) & 0xffu) << 8 | ((uint32_t)(cVar3) & 0xffu))) & 0xffffu) << 16 | ((uint32_t)((((uint32_t)(cVar3) & 0xffu) << 8 | ((uint32_t)(cVar3) & 0xffu))) & 0xffffu));
            uVar7 = uVar5 ^ 0xffffffff ^ uVar5 + 0x7efefeff;
            puVar10 = param_1 + 4u * (uint32_t)(1);
            if (((uVar9 ^ 0xffffffff ^ uVar9 + 0x7efefeff) & 0x81010100) != 0) break;
            param_1 = puVar10;
            if ((uVar7 & 0x81010100) != 0) {
              if ((uVar7 & 0x1010100) != 0) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
              }
              if ((uVar5 + 0x7efefeff & 0x80000000) == 0) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
              }
            }
          }
          uVar5 = rd32((uint32_t)param_1);
          if ((char)uVar5 == cVar3) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(param_1) & 0xffu)); return;
          }
          if ((char)uVar5 == '\0') {
            g->eax = (CowU32)((CowU32)0x0); return;
          }
          cVar6 = (char)(uVar5 >> 8);
          if (cVar6 == cVar3) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)((int)param_1 + 1)) & 0xffu)); return;
          }
          if (cVar6 == '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
          }
          cVar6 = (char)(uVar5 >> 0x10);
          if (cVar6 == cVar3) {
            g->eax = (CowU32)((g->eax & 0xffff00ffu) | (((CowU32)((CowU32)((int)param_1 + 2)) & 0xffu) << 8)); return;
          }
          if (cVar6 == '\0') break;
          cVar6 = (char)(uVar5 >> 0x18);
          if (cVar6 == cVar3) {
            g->eax = (CowU32)((g->eax & 0xffff00ffu) | (((CowU32)((CowU32)((int)param_1 + 3)) & 0xffu) << 8)); return;
          }
          param_1 = puVar10;
          if (cVar6 == '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
          }
        }
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
      }
      do {
        cVar6 = (char)rd32((uint32_t)param_1);
        do {
          while (puVar10 = param_1, param_1 = (CowU32)((int)puVar10 + 1), cVar6 != cVar3) {
            if (cVar6 == '\0') {
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((CowU32)0x0) & 0xffu)); return;
            }
            cVar6 = (int8_t)rd8((uint32_t)param_1);
          }
          cVar6 = (int8_t)rd8((uint32_t)param_1);
          pcVar8 = param_2;
          puVar4 = puVar10;
        } while (cVar6 != rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))));
        do {
          if (rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(2))) == '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(puVar10) & 0xffu)); return;
          }
          if ((int8_t)rd8((uint32_t)((int)puVar4 + 2)) != rd8((uint32_t)(pcVar8 + 1u * (uint32_t)(2)))) break;
          pcVar1 = pcVar8 + 3;
          if (rd8((uint32_t)pcVar1) == '\0') {
            g->eax = (CowU32)((g->eax & 0xffff00ffu) | (((CowU32)(puVar10) & 0xffu) << 8)); return;
          }
          pcVar2 = (CowU32)((int)puVar4 + 3);
          pcVar8 = pcVar8 + 2;
          puVar4 = (CowU32)((int)puVar4 + 2);
        } while (rd8((uint32_t)pcVar1) == rd8((uint32_t)pcVar2));
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [edi, ebx, esi], frame pointer no, 0 locals, pops [esi, ebx, edi], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10311ef0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = param_3;   /* 0x10311ef0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10311ef4: push edi */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10311ef5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10311ef6: push esi */
    { uint32_t A = (uint32_t)(g->ecx); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10311ef7: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10311ef9: register edi, replayed as the entry ran it */
    cow_lift_10311ef0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
