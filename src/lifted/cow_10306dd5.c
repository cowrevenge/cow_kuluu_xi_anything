/* f_0x10306dd5 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10306dd5 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10306dd5(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    CowU32 piVar5;
    CowU32 piVar6;
    int local_c;
    int local_8;
    if (param_3 < param_4) {
        local_8 = param_3 * 2;
        piVar6 = (CowU32)(param_3 * 0x20 + 0xc + param_2);
        while( 1 ) {
          piVar5 = (CowU32)0x0;
          iVar4 = 0;
          local_c = param_3;
          if (param_4 < local_8) {
            if (0 < local_8) {
              piVar1 = (CowU32)(param_2 + 0x18);
              do {
                if (iVar4 < rd32((uint32_t)piVar1)) {
                  piVar5 = piVar1 + -6;
                  iVar4 = rd32((uint32_t)piVar1);
                }
                piVar1 = piVar1 + 8;
                local_c = local_c + -1;
              } while (local_c != 0);
            }
          }
          else if (0 < local_8) {
            piVar1 = (CowU32)(param_2 + 0x1c);
            do {
              if ((iVar4 < rd32((uint32_t)piVar1)) && (0 < rd32((uint32_t)(piVar1 + 4u * (uint32_t)(-1))))) {
                piVar5 = piVar1 + -7;
                iVar4 = rd32((uint32_t)piVar1);
              }
              piVar1 = piVar1 + 8;
              local_c = local_c + -1;
            } while (local_c != 0);
          }
          if (piVar5 == (CowU32)0x0) break;
          wr32((uint32_t)(piVar6 + 4u * (uint32_t)(-2)), rd32((uint32_t)(piVar5 + 4u * (uint32_t)(1))));
          wr32((uint32_t)piVar6, rd32((uint32_t)(piVar5 + 4u * (uint32_t)(3))));
          wr32((uint32_t)(piVar6 + 4u * (uint32_t)(2)), rd32((uint32_t)(piVar5 + 4u * (uint32_t)(5))));
          wr32((uint32_t)(piVar6 + 4u * (uint32_t)(-3)), rd32((uint32_t)piVar5));
          wr32((uint32_t)(piVar6 + 4u * (uint32_t)(-1)), rd32((uint32_t)(piVar5 + 4u * (uint32_t)(2))));
          wr32((uint32_t)(piVar6 + 4u * (uint32_t)(1)), rd32((uint32_t)(piVar5 + 4u * (uint32_t)(4))));
          iVar2 = (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(1))) - rd32((uint32_t)piVar5)) * 0x10;
          iVar4 = (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(3))) - rd32((uint32_t)(piVar5 + 4u * (uint32_t)(2)))) * 0xc;
          cVar3 = iVar2 <= iVar4;
          if (!(_Bool)cVar3) {
            iVar4 = iVar2;
          }
          if (iVar4 < (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(5))) - rd32((uint32_t)(piVar5 + 4u * (uint32_t)(4)))) * 8) {
            cVar3 = '\x02';
          }
          if (cVar3 == '\0') {
            iVar4 = (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(1))) + rd32((uint32_t)piVar5)) / 2;
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(1)), iVar4);
            wr32((uint32_t)(piVar6 + 4u * (uint32_t)(-3)), iVar4 + 1);
          }
          else if (cVar3 == '\x01') {
            iVar4 = (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(3))) + rd32((uint32_t)(piVar5 + 4u * (uint32_t)(2)))) / 2;
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(3)), iVar4);
            wr32((uint32_t)(piVar6 + 4u * (uint32_t)(-1)), iVar4 + 1);
          }
          else if (cVar3 == '\x02') {
            iVar4 = (rd32((uint32_t)(piVar5 + 4u * (uint32_t)(5))) + rd32((uint32_t)(piVar5 + 4u * (uint32_t)(4)))) / 2;
            wr32((uint32_t)(piVar5 + 4u * (uint32_t)(5)), iVar4);
            wr32((uint32_t)(piVar6 + 4u * (uint32_t)(1)), iVar4 + 1);
          }
          cow_bridge_10306a9d(g, COW_IMG(COW_ADDR_LIFT_10306F01), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_4, 0u);
          cow_bridge_10306a9d(g, COW_IMG(COW_ADDR_LIFT_10306F0C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_4, 0u);
          local_8 = local_8 + 2;
          param_3 = param_3 + 1;
          piVar6 = piVar6 + 8;
          if (param_4 <= param_3) {
            return;
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10306dd5(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10306dd5: push ebp */
    g->ebp = g->esp;                       /* 0x10306dd6: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10306dd8: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10306dd9: push ecx */
    g->eax = param_4;   /* 0x10306dda: the value the entry loaded and the decompiler dropped */
    cow_lift_10306dd5(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
