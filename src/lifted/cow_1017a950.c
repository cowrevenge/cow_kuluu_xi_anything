/* f_0x1017a950 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1017a950 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1017a950(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 piVar3;
    CowU32 puVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    CowU32 puVar10;
    int local_14;
    CowU32 local_10;
    int local_c;
    int local_8;
    int local_4;
    iVar1 = (int)param_1;
      iVar2 = 0;
      if (0 < rd32((uint32_t)((int)param_1 + 0x24))) {
        puVar4 = (CowU32)(rd32((uint32_t)((int)param_1 + 0x28)) + 0xc);
        do {
          wr8((uint32_t)puVar4, 0);
          iVar2 = iVar2 + 1;
          puVar4 = puVar4 + 0x16c;
        } while (iVar2 < rd32((uint32_t)((int)param_1 + 0x24)));
      }
      iVar2 = rd32((uint32_t)((int)param_1 + 0x24));
      iVar7 = 0;
      wr32((uint32_t)((int)param_1 + 0x40), 0);
      if (0 < iVar2) {
        puVar9 = (CowU32)(rd32((uint32_t)((int)param_1 + 0x28)) + 0xc0);
        do {
          if (((rd32((uint32_t)puVar9) != 0) && ((char)rd32((uint32_t)(puVar9 + 4u * (uint32_t)(-0x2d))) == '\0')) &&
             ((uVar5 = rd32((uint32_t)puVar9) & 0xff, uVar5 == 0x5f || (uVar5 == 0x40)))) {
            wr32((uint32_t)((int)param_1 + 0x40), rd32((uint32_t)((int)param_1 + 0x40)) + 1);
            iVar6 = 0;
            if (0 < iVar2) {
              puVar4 = (CowU32)(rd32((uint32_t)((int)param_1 + 0x28)) + 0xc);
              do {
                if (rd32((uint32_t)puVar9) == rd32((uint32_t)(puVar4 + 0xb4))) {
                  wr8((uint32_t)puVar4, 1);
                }
                iVar6 = iVar6 + 1;
                puVar4 = puVar4 + 0x16c;
              } while (iVar6 < rd32((uint32_t)((int)param_1 + 0x24)));
            }
          }
          iVar2 = rd32((uint32_t)((int)param_1 + 0x24));
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 0x5b;
        } while (iVar7 < iVar2);
      }
      iVar2 = rd32((uint32_t)((int)param_1 + 0x40));
      wr32((uint32_t)((int)param_1 + 0x3c), 0);
      if (iVar2 != 0) {
        piVar3 = (CowU32)cow_bridge_1002c8c0(g, COW_IMG(COW_ADDR_LIFT_1017AA13), 1u, (const CowU32[]){ iVar2 * 0x1ac + 4 }, g->ecx, g->edx, 0u, 4u);
        if (piVar3 == (CowU32)0x0) {
          piVar3 = (CowU32)0x0;
        }
        else {
          wr32((uint32_t)piVar3, iVar2);
          piVar3 = piVar3 + 1;
          if (-1 < iVar2 + -1) {
            do {
              cow_bridge_10170ff0(g, COW_IMG(COW_ADDR_LIFT_1017AA32), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        wr32((uint32_t)((int)param_1 + 0x3c), piVar3);
        if (piVar3 != (CowU32)0x0) {
          iVar2 = 0;
          if (0 < rd32((uint32_t)((int)param_1 + 0x24))) {
            puVar4 = (CowU32)(rd32((uint32_t)((int)param_1 + 0x28)) + 0xc);
            do {
              wr8((uint32_t)puVar4, 0);
              iVar2 = iVar2 + 1;
              puVar4 = puVar4 + 0x16c;
            } while (iVar2 < rd32((uint32_t)((int)param_1 + 0x24)));
          }
          iVar2 = rd32((uint32_t)((int)param_1 + 0x3c));
          local_4 = 0;
          if (0 < rd32((uint32_t)((int)param_1 + 0x24))) {
            local_10 = (CowU32)(rd32((uint32_t)((int)param_1 + 0x28)) + 0xc0);
            local_14 = iVar2;
            do {
              if ((char)rd32((uint32_t)(local_10 + 4u * (uint32_t)(-0x2d))) == '\0') {
                uVar5 = rd32((uint32_t)local_10) & 0xff;
                if ((uVar5 == 0x5f) || (uVar5 == 0x40)) {
                  wr32((uint32_t)(iVar2 + 4), rd32((uint32_t)local_10));
                  local_8 = rd32((uint32_t)(iVar1 + 0x28));
                  iVar7 = 0;
                  local_c = 0;
                  if (((int32_t)(0) < (int32_t)(rd32((uint32_t)(iVar1 + 0x24))))) {
                    param_1 = (CowU32)(iVar2 + 0x198);
                    puVar10 = (CowU32)(local_8 + 0x1c);
                    puVar8 = (CowU32)(iVar2 + 0x38);
                    do {
                      if (rd32((uint32_t)local_10) == rd32((uint32_t)(puVar10 + 4u * (uint32_t)(0x29)))) {
                        if (iVar7 < 4) {
                          wr32((uint32_t)param_1, local_8);
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(-0xc)), rd32((uint32_t)puVar10));
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(-0xb)), rd32((uint32_t)(puVar10 + 4u * (uint32_t)(1))));
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(-10)), rd32((uint32_t)(puVar10 + 4u * (uint32_t)(2))));
                          wr32((uint32_t)puVar8, rd32((uint32_t)(puVar10 + 4u * (uint32_t)(3))));
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(1)), rd32((uint32_t)(puVar10 + 4u * (uint32_t)(4))));
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(2)), rd32((uint32_t)(puVar10 + 4u * (uint32_t)(5))));
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(0xc)), rd32((uint32_t)(puVar10 + 4u * (uint32_t)(6))));
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(0xd)), rd32((uint32_t)(puVar10 + 4u * (uint32_t)(7))));
                          wr32((uint32_t)(puVar8 + 4u * (uint32_t)(0xe)), rd32((uint32_t)(puVar10 + 4u * (uint32_t)(8))));
                          cow_bridge_101714c0(g, COW_IMG(COW_ADDR_LIFT_1017AB48), 0u, (const CowU32[]){ 0u }, iVar7, g->edx, 0u, 0u);
                          iVar2 = local_14;
                        }
                        iVar7 = iVar7 + 1;
                        param_1 = param_1 + 1;
                        puVar8 = puVar8 + 3;
                        wr8((uint32_t)(puVar10 + -4), 1);
                      }
                      local_8 = local_8 + 0x16c;
                      local_c = local_c + 1;
                      puVar10 = puVar10 + 0x5b;
                    } while (((int32_t)(local_c) < (int32_t)(rd32((uint32_t)(iVar1 + 0x24)))));
                    if (iVar7 != 0) {
                      if (3 < iVar7) {
                        iVar7 = 4;
                      }
                      wr8((uint32_t)(iVar2 + 0x1a9), (char)iVar7);
                    }
                  }
                  iVar2 = iVar2 + 0x1ac;
                  local_14 = iVar2;
                }
              }
              local_4 = local_4 + 1;
              local_10 = local_10 + 0x5b;
            } while (((int32_t)(local_4) < (int32_t)(rd32((uint32_t)(iVar1 + 0x24)))));
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 20 locals, pops [-], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1017a950(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x14u;                      /* 0x1017a950: 20 bytes of locals */
    g->eax = 0u;   /* 0x1017a953: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1017a955: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1017a956: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1017a957: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1017a958: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x28u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1017a959: register edi, replayed as the entry ran it */
    g->ebp = 0u;   /* 0x1017a95d: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x24u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1017a95f: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x28u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1017a962: register ecx, replayed as the entry ran it */
    cow_lift_1017a950(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
