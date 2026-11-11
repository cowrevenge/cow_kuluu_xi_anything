/* f_0x102c32b3 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c32b3 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c32b3(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    uVar1 = rd32((uint32_t)param_1);
      if (rd8((uint32_t)((int)param_1 + 10)) == '\x04') {
        if (rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          if ((param_3 & 0x80) == 0) {
            if (uVar1 != 0) {
              puVar3 = param_2;
              uVar4 = uVar1;
              do {
                wr8((uint32_t)puVar3, rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(1)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(2)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(3))));
                puVar3 = puVar3 + 3;
                param_2 = param_2 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if (1 < uVar1) {
            iVar2 = uVar1 - 1;
            puVar3 = param_2;
            do {
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(3)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(4))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(4)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(5))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(5)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(6))));
              iVar2 = iVar2 + -1;
              param_2 = param_2 + 3;
              puVar3 = puVar3 + 4;
            } while (iVar2 != 0);
          }
          wr8((uint32_t)((int)param_1 + 0xb), 0x18);
          uVar1 = uVar1 * 3;
        }
        else {
          if ((param_3 & 0x80) == 0) {
            if (uVar1 != 0) {
              puVar3 = param_2;
              uVar4 = uVar1;
              do {
                wr8((uint32_t)puVar3, rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(1)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(3))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(2)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(4))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(3)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(5))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(4)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(6))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(5)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(7))));
                puVar3 = puVar3 + 6;
                param_2 = param_2 + 8;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if (1 < uVar1) {
            iVar2 = uVar1 - 1;
            puVar3 = param_2;
            do {
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(6)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(8))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(7)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(9))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(8)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(10))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(9)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(0xb))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(10)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(0xc))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(0xb)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(0xd))));
              iVar2 = iVar2 + -1;
              param_2 = param_2 + 6;
              puVar3 = puVar3 + 8;
            } while (iVar2 != 0);
          }
          wr8((uint32_t)((int)param_1 + 0xb), 0x30);
          uVar1 = uVar1 * 6;
        }
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), uVar1);
        wr8((uint32_t)((int)param_1 + 10), 3);
      }
      else {
        if (rd8((uint32_t)((int)param_1 + 10)) != '\x02') {
          return;
        }
        if (rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          if ((param_3 & 0x80) == 0) {
            if (uVar1 != 0) {
              puVar3 = param_2;
              uVar4 = uVar1;
              do {
                wr8((uint32_t)puVar3, rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))));
                puVar3 = puVar3 + 1;
                param_2 = param_2 + 2;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if (uVar1 != 0) {
            puVar3 = param_2;
            uVar4 = uVar1;
            do {
              wr8((uint32_t)puVar3, rd8((uint32_t)param_2));
              puVar3 = puVar3 + 1;
              param_2 = param_2 + 2;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          wr8((uint32_t)((int)param_1 + 0xb), 8);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), uVar1);
        }
        else {
          if ((param_3 & 0x80) == 0) {
            if (uVar1 != 0) {
              puVar3 = param_2;
              uVar4 = uVar1;
              do {
                wr8((uint32_t)puVar3, rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))));
                wr8((uint32_t)(puVar3 + 1u * (uint32_t)(1)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(3))));
                puVar3 = puVar3 + 2;
                param_2 = param_2 + 4;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
          }
          else if (1 < uVar1) {
            iVar2 = uVar1 - 1;
            puVar3 = param_2;
            do {
              wr8((uint32_t)(puVar3 + 1u * (uint32_t)(2)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(4))));
              wr8((uint32_t)(puVar3 + 1u * (uint32_t)(3)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(5))));
              iVar2 = iVar2 + -1;
              param_2 = param_2 + 4;
              puVar3 = puVar3 + 2;
            } while (iVar2 != 0);
          }
          wr8((uint32_t)((int)param_1 + 0xb), 0x10);
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), uVar1 * 2);
        }
        wr8((uint32_t)((int)param_1 + 10), 1);
      }
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(2)), (CowU8)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) & 0xfb);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebp, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ebp], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c32b3(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c32b3: push ebp */
    g->ebp = g->esp;                       /* 0x102c32b4: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c32b6: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c32b7: push esi */
    g->esi = param_3;   /* 0x102c32b8: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c32bb: push edi */
    g->edi = param_2;   /* 0x102c32bc: the value the entry loaded and the decompiler dropped */
    g->eax = g->esi;   /* 0x102c32bf: the value the entry loaded and the decompiler dropped */
    g->ecx = g->esi;   /* 0x102c32c1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0xAu); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102c32c3: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102c32c6: register ebx, replayed as the entry ran it */
    cow_lift_102c32b3(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
