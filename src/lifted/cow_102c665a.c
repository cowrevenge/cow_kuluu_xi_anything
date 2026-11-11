/* f_0x102c665a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c665a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c665a(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 pbVar5;
    CowU32 uVar6;
    int iVar7;
    CowU32 uVar8;
    CowU8 local_2c[4];
    CowU32 local_28;
    CowU32 local_24;
    CowU32 local_20;
    CowU32 local_1c;
    CowU32 local_18;
    CowU32 local_14;
    int local_10;
    CowU32 local_c;
    CowU32 local_8;
    uVar4 = rd32((uint32_t)(param_1 + 0x70));
      local_8 = (CowU32)(param_1 + 0x100);
      iVar3 = rd32((uint32_t)(param_1 + 0xec)) + 1;
      if ((iVar3 != 0) && (local_8 != (CowU32)0x0)) {
        uVar2 = rd32((uint32_t)local_8);
        local_10 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10342EC8) + (CowU32)rd8((uint32_t)(param_1 + 0x124)) * 4));
        bVar1 = rd8((uint32_t)(param_1 + 0x10b));
        uVar6 = uVar2 * local_10;
        if (bVar1 == 1) {
          pbVar5 = (CowU32)((uVar2 - 1 >> 3) + iVar3);
          local_c = (CowU32)((uVar6 - 1 >> 3) + iVar3);
          if ((uVar4 & 0x10000) == 0) {
            uVar4 = 7 - (uVar2 - 1 & 7);
            local_20 = 7;
            uVar8 = 7 - (uVar6 - 1 & 7);
            local_1c = 0;
            local_18 = 1;
          }
          else {
            local_20 = 0;
            uVar4 = uVar2 - 1 & 7;
            uVar8 = uVar6 - 1 & 7;
            local_18 = -1;
            local_1c = 7;
          }
          local_14 = 0;
          local_24 = pbVar5;
          if (uVar2 != 0) {
            do {
              bVar1 = rd8((uint32_t)pbVar5);
              if (0 < local_10) {
                local_28 = (CowU32)local_10;
                do {
                  wr8((uint32_t)local_c, (CowU8)(0x7f7f >> (7 - (CowU8)uVar8 & 0x1f)) & rd8((uint32_t)local_c) |
                             (bVar1 >> ((CowU8)uVar4 & 0x1f) & 1) << ((CowU8)uVar8 & 0x1f));
                  if (uVar8 == local_20) {
                    local_c = local_c + -1;
                    uVar8 = local_1c;
                  }
                  else {
                    uVar8 = uVar8 + local_18;
                  }
                  local_28 = (CowU32)((int)local_28 + -1);
                } while (local_28 != (CowU32)0x0);
                pbVar5 = local_24;
              }
              if (uVar4 == local_20) {
                pbVar5 = pbVar5 + -1;
                uVar4 = local_1c;
                local_24 = pbVar5;
              }
              else {
                uVar4 = uVar4 + local_18;
              }
              local_14 = local_14 + 1;
            } while (local_14 < rd32((uint32_t)local_8));
          }
        }
        else if (bVar1 == 2) {
          pbVar5 = (CowU32)((uVar2 - 1 >> 2) + iVar3);
          local_c = (CowU32)((uVar6 - 1 >> 2) + iVar3);
          if ((uVar4 & 0x10000) == 0) {
            uVar4 = (3 - (uVar2 - 1 & 3)) * 2;
            local_20 = 6;
            uVar8 = (3 - (uVar6 - 1 & 3)) * 2;
            local_1c = 0;
            local_18 = 2;
          }
          else {
            uVar4 = uVar2 * 2 - 1 & 6;
            uVar8 = uVar6 * 2 - 1 & 6;
            local_20 = 0;
            local_1c = 6;
            local_18 = -2;
          }
          local_14 = 0;
          local_24 = pbVar5;
          if (uVar2 != 0) {
            do {
              bVar1 = rd8((uint32_t)pbVar5);
              if (0 < local_10) {
                local_28 = (CowU32)local_10;
                do {
                  wr8((uint32_t)local_c, (CowU8)(0x3f3f >> (6 - (CowU8)uVar8 & 0x1f)) & rd8((uint32_t)local_c) |
                             (bVar1 >> ((CowU8)uVar4 & 0x1f) & 3) << ((CowU8)uVar8 & 0x1f));
                  if (uVar8 == local_20) {
                    local_c = local_c + -1;
                    uVar8 = local_1c;
                  }
                  else {
                    uVar8 = uVar8 + local_18;
                  }
                  local_28 = (CowU32)((int)local_28 + -1);
                } while (local_28 != (CowU32)0x0);
                pbVar5 = local_24;
              }
              if (uVar4 == local_20) {
                pbVar5 = pbVar5 + -1;
                uVar4 = local_1c;
                local_24 = pbVar5;
              }
              else {
                uVar4 = uVar4 + local_18;
              }
              local_14 = local_14 + 1;
            } while (local_14 < rd32((uint32_t)local_8));
          }
        }
        else if (bVar1 == 4) {
          pbVar5 = (CowU32)((uVar2 - 1 >> 1) + iVar3);
          local_c = (CowU32)((uVar6 - 1 >> 1) + iVar3);
          if ((uVar4 & 0x10000) == 0) {
            uVar4 = (uVar2 - 1 & 1) * -4 + 4;
            local_14 = 4;
            uVar8 = (uVar6 - 1 & 1) * -4 + 4;
            local_18 = 0;
            local_1c = 4;
          }
          else {
            uVar4 = uVar2 * -4 - 1 & 4;
            local_18 = 4;
            uVar8 = uVar6 * -4 - 1 & 4;
            local_14 = 0;
            local_1c = -4;
          }
          local_20 = 0;
          local_28 = pbVar5;
          if (uVar2 != 0) {
            do {
              bVar1 = rd8((uint32_t)pbVar5);
              if (0 < local_10) {
                local_24 = (CowU32)local_10;
                do {
                  wr8((uint32_t)local_c, (CowU8)(0xf0f >> (4 - (CowU8)uVar8 & 0x1f)) & rd8((uint32_t)local_c) |
                             (bVar1 >> ((CowU8)uVar4 & 0x1f) & 0xf) << ((CowU8)uVar8 & 0x1f));
                  if (uVar8 == local_14) {
                    local_c = local_c + -1;
                    uVar8 = local_18;
                  }
                  else {
                    uVar8 = uVar8 + local_1c;
                  }
                  local_24 = (CowU32)((int)local_24 + -1);
                } while (local_24 != (CowU32)0x0);
                pbVar5 = local_28;
              }
              if (uVar4 == local_14) {
                pbVar5 = pbVar5 + -1;
                uVar4 = local_18;
                local_28 = pbVar5;
              }
              else {
                uVar4 = uVar4 + local_1c;
              }
              local_20 = local_20 + 1;
            } while (local_20 < rd32((uint32_t)local_8));
          }
        }
        else {
          uVar4 = (CowU32)(bVar1 >> 3);
          local_c = (CowU32)0x0;
          iVar7 = (uVar2 - 1) * uVar4 + iVar3;
          iVar3 = (uVar6 - 1) * uVar4 + iVar3;
          if (uVar2 != 0) {
            do {
              cow_bridge_103169e0(g, COW_IMG(COW_ADDR_LIFT_102C66E6), 3u, (const CowU32[]){ local_2c, iVar7, uVar4 }, g->ecx, g->edx, param_1, 0u);
              if (0 < local_10) {
                local_20 = local_10;
                do {
                  cow_bridge_103169e0(g, COW_IMG(COW_ADDR_LIFT_102C6700), 3u, (const CowU32[]){ iVar3, local_2c, uVar4 }, g->ecx, g->edx, param_1, 0u);
                  iVar3 = iVar3 - uVar4;
                  local_20 = local_20 + -1;
                } while (local_20 != 0);
              }
              iVar7 = iVar7 - uVar4;
              local_c = (CowU32)((int)local_c + 1);
            } while (local_c < rd32((uint32_t)local_8));
          }
        }
        wr32((uint32_t)local_8, uVar6);
        wr32((uint32_t)(local_8 + 4u * (uint32_t)(1)), rd8((uint32_t)((int)local_8 + 0xb)) * uVar6 + 7 >> 3);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c665a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c665a: push ebp */
    g->ebp = g->esp;                       /* 0x102c665b: mov ebp, esp */
    g->esp -= 0x28u;                      /* 0x102c665d: 40 bytes of locals */
    g->eax = param_1;   /* 0x102c6660: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c6663: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c6664: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0xECu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102c6665: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x70u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102c666b: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x124u); g->esi = (uint32_t)(rd8(A)); }   /* 0x102c666e: register esi, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->eax + 0x100u)); }   /* 0x102c6675: register edx, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a + 1u); g->ecx = (uint32_t)(r); }; }   /* 0x102c667b: register ecx, replayed as the entry ran it */
    cow_lift_102c665a(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
