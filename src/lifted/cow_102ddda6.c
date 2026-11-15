/* f_0x102ddda6 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ddda6 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ddda6(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    int iVar6;
    CowU32 puVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    int iStack_2c;
    CowU32 local_18;
    CowU32 local_14;
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    iVar6 = rd32((uint32_t)param_1);
      if (((rd32((uint32_t)(iVar6 + 0x103c)) | rd32((uint32_t)(iVar6 + 0x1038)) | rd32((uint32_t)(iVar6 + 0x1030)) |
           rd32((uint32_t)(iVar6 + 0x1034))) & 3) != 0) {
        g->eax = (CowU32)(0x80004005); return;
      }
      iVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
      if (((rd32((uint32_t)(iVar1 + 0x103c)) | rd32((uint32_t)(iVar1 + 0x1038)) | rd32((uint32_t)(iVar1 + 0x1030)) |
           rd32((uint32_t)(iVar1 + 0x1034))) & 3) == 0) {
        iVar2 = (int32_t)rd32((uint32_t)(iVar1 + 4));
        if (iVar2 == 0x31545844) {
          iStack_2c = 8;
        }
        else {
          if ((((iVar2 != 0x32545844) && (iVar2 != 0x33545844)) && (iVar2 != 0x34545844)) &&
             (iVar2 != 0x35545844)) goto L_102dde09;
          iStack_2c = 0x10;
        }
        uVar3 = rd32((uint32_t)(iVar1 + 0x1058));
        local_10 = (CowU32)
                   ((rd32((uint32_t)(iVar1 + 0x1034)) >> 2) * (int32_t)rd32((uint32_t)(iVar1 + 0x1050)) +
                    (int32_t)rd32((uint32_t)(iVar1 + 0x1054)) * (int32_t)rd32((uint32_t)(iVar1 + 0x1040)) +
                    (rd32((uint32_t)(iVar1 + 0x1030)) >> 2) * iStack_2c + (int32_t)rd32((uint32_t)(iVar1 + 0x18)));
        local_14 = 0;
        local_18 = (CowU32)
                   ((rd32((uint32_t)(iVar6 + 0x1034)) >> 2) * (int32_t)rd32((uint32_t)(iVar6 + 0x1050)) +
                    (int32_t)rd32((uint32_t)(iVar6 + 0x1054)) * (int32_t)rd32((uint32_t)(iVar6 + 0x1040)) +
                    (rd32((uint32_t)(iVar6 + 0x1030)) >> 2) * iStack_2c + (int32_t)rd32((uint32_t)(iVar6 + 0x18)));
        if ((int32_t)rd32((uint32_t)(iVar1 + 0x1060)) != 0) {
          uVar5 = rd32((uint32_t)(iVar1 + 0x105c));
          do {
            local_c = 0;
            puVar7 = local_10;
            local_8 = local_18;
            if (uVar5 != 0) {
              do {
                local_c = local_c + 4;
                puVar8 = local_8;
                puVar9 = puVar7;
                for (uVar5 = (uVar3 >> 2) * iStack_2c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                  wr32((uint32_t)puVar9, rd32((uint32_t)puVar8));
                  puVar8 = puVar8 + 4u * (uint32_t)(1);
                  puVar9 = puVar9 + 4u * (uint32_t)(1);
                }
                for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                  wr8((uint32_t)puVar9, rd8((uint32_t)puVar8));
                  puVar8 = (CowU32)((int)puVar8 + 1);
                  puVar9 = (CowU32)((int)puVar9 + 1);
                }
                puVar7 = (CowU32)((int)puVar7 + (int32_t)rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1050)));
                uVar5 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x105c));
                local_8 = (CowU32)((int)local_8 + (int32_t)rd32((uint32_t)(rd32((uint32_t)param_1) + 0x1050)));
              } while (local_c < uVar5);
            }
            local_10 = (CowU32)((int)local_10 + (int32_t)rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1054)));
            local_18 = (CowU32)((int)local_18 + (int32_t)rd32((uint32_t)(rd32((uint32_t)param_1) + 0x1054)));
            local_14 = local_14 + 1;
          } while (local_14 < rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1060)));
        }
        uVar4 = 0;
      }
      else {
    L_102dde09:
        uVar4 = 0x80004005;
      }
      g->eax = (CowU32)(uVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102ddda6(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102ddda6: push ebp */
    g->ebp = g->esp;                       /* 0x102ddda7: mov ebp, esp */
    g->esp -= 0x18u;                      /* 0x102ddda9: 24 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102dddac: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102dddad: push edi */
    { uint32_t A = (uint32_t)(g->ecx); g->edi = (uint32_t)(rd32(A)); }   /* 0x102dddae: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x103Cu); g->edx = (uint32_t)(rd32(A)); }   /* 0x102dddb0: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x1038u); uint32_t a = g->edx; uint32_t b = (uint32_t)rd32(A); uint32_t r = (uint32_t)(a | b); g->edx = (uint32_t)(r); }   /* 0x102dddb6: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x1030u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102dddbc: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x1034u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102dddc2: register esi, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->eax; uint32_t r = (uint32_t)(a | b); g->edx = (uint32_t)(r); }   /* 0x102dddc8: register edx, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->esi; uint32_t r = (uint32_t)(a | b); g->edx = (uint32_t)(r); }   /* 0x102dddca: register edx, replayed as the entry ran it */
    cow_lift_102ddda6(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
