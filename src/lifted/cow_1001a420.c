/* f_0x1001a420 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1001a420 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1001a420(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    CowU32 puVar7;
    CowU32 uVar8;
    int iVar9;
    int local_1c;
    CowU32 local_18;
    CowU8 local_10[16];
    if ((rd32(COW_IMG(COW_ADDR_LIFT_10456D28)) & 1) == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_10456D28), rd32(COW_IMG(COW_ADDR_LIFT_10456D28)) | 1);
        cow_bridge_10032a40(g, COW_IMG(COW_ADDR_LIFT_1001A44B), 0u, (const CowU32[]){ 0u }, 272985388u, g->edx, g->eax, 0u);
        cow_bridge_103134c6(g, COW_IMG(COW_ADDR_LIFT_1001A455), 1u, (const CowU32[]){ 268543568u }, g->ecx, g->edx, g->eax, 4u);
      }
      uVar8 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_10462430)) != 0) {
        puVar7 = COW_IMG(COW_ADDR_LIFT_1045F040);
        do {
          uVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10456D30));
          wr32((uint32_t)(puVar7 + 4u * (uint32_t)(-4)), rd32(COW_IMG(COW_ADDR_LIFT_10456D2C)));
          uVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10456D34));
          wr32((uint32_t)(puVar7 + 4u * (uint32_t)(-3)), uVar1);
          uVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10456D38));
          wr32((uint32_t)(puVar7 + 4u * (uint32_t)(-2)), uVar2);
          wr32((uint32_t)(puVar7 + 4u * (uint32_t)(-1)), uVar1);
          cow_bridge_10026eb0(g, COW_IMG(COW_ADDR_LIFT_1001A499), 2u, (const CowU32[]){ puVar7, COW_IMG(COW_ADDR_LIFT_10456D3C) }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10026eb0(g, COW_IMG(COW_ADDR_LIFT_1001A4A7), 2u, (const CowU32[]){ puVar7 + 4u * (uint32_t)(3), COW_IMG(COW_ADDR_LIFT_1035109C) }, g->ecx, g->edx, g->eax, 0u);
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 4u * (uint32_t)(0xd);
        } while (uVar8 < rd32(COW_IMG(COW_ADDR_LIFT_10462430)));
      }
      iVar9 = 0;
      iVar6 = param_1 + 0x50;
      iVar5 = 5;
      do {
        iVar3 = cow_bridge_1001b340(g, COW_IMG(COW_ADDR_LIFT_1001A4CA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar9 = iVar9 + iVar3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar9 == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      iVar5 = 4;
      uVar8 = rd32(COW_IMG(COW_ADDR_LIFT_10462430));
      do {
        if ((int32_t)rd32((uint32_t)(iVar6 + 4)) != 0) {
          cow_bridge_1001b230(g, COW_IMG(COW_ADDR_LIFT_1001A501), 2u, (const CowU32[]){ iVar5, COW_IMG(COW_ADDR_LIFT_1045F030) }, g->ecx, g->edx, g->eax, 0u);
          uVar4 = 0;
          uVar8 = rd32(COW_IMG(COW_ADDR_LIFT_10462430));
          if (rd32(COW_IMG(COW_ADDR_LIFT_10462430)) != 0) {
            do {
              if ((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045F028)) + uVar4)) & 0x3f) != 0) {
                wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045F028)) + uVar4), rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045F028)) + uVar4)) | 0x40);
                uVar8 = rd32(COW_IMG(COW_ADDR_LIFT_10462430));
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < uVar8);
          }
        }
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + -0x14;
      } while (-1 < iVar5);
      local_1c = 5;
      local_18 = (CowU32)(param_1 + 0x70);
      do {
        if (rd32((uint32_t)(local_18 + 4u * (uint32_t)(-2))) != 0) {
          uVar4 = 0;
          if (uVar8 != 0) {
            do {
              wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045F028)) + uVar4), rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045F028)) + uVar4)) & 0x80);
              uVar4 = uVar4 + 1;
            } while (uVar4 < rd32(COW_IMG(COW_ADDR_LIFT_10462430)));
          }
          cow_bridge_1001b230(g, COW_IMG(COW_ADDR_LIFT_1001A57F), 2u, (const CowU32[]){ local_1c, COW_IMG(COW_ADDR_LIFT_1045B820) }, g->ecx, g->edx, g->eax, 0u);
          uVar1 = rd32((uint32_t)local_18);
          uVar4 = 0;
          uVar8 = rd32(COW_IMG(COW_ADDR_LIFT_10462430));
          if (rd32(COW_IMG(COW_ADDR_LIFT_10462430)) != 0) {
            iVar5 = 0;
            do {
              if (((char)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045F028)) + uVar4)) < '\0') &&
                 ((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045F028)) + uVar4)) & 0x3f) != 0)) {
                puVar7 = (CowU32)cow_bridge_10033220(g, COW_IMG(COW_ADDR_LIFT_1001A5C5), 3u, (const CowU32[]){ local_10, COW_IMG(COW_ADDR_LIFT_1045B820) + iVar5, uVar1 }, g->ecx, g->edx, g->eax, 0u);
                wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_1045F030) + iVar5), rd32((uint32_t)puVar7));
                wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_1045F034) + iVar5), rd32((uint32_t)(puVar7 + 4u * (uint32_t)(1))));
                wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_1045F038) + iVar5), rd32((uint32_t)(puVar7 + 4u * (uint32_t)(2))));
                wr32((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_1045F03C) + iVar5), rd32((uint32_t)(puVar7 + 4u * (uint32_t)(3))));
                cow_bridge_10032a70(g, COW_IMG(COW_ADDR_LIFT_1001A5E4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_100276a0(g, COW_IMG(COW_ADDR_LIFT_1001A5F9), 4u, (const CowU32[]){ (int)COW_IMG(COW_ADDR_LIFT_1045F040) + iVar5, COW_IMG(COW_ADDR_LIFT_1045B830) + iVar5, (int)COW_IMG(COW_ADDR_LIFT_1045F040) + iVar5, uVar1 }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_100276a0(g, COW_IMG(COW_ADDR_LIFT_1001A60E), 4u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1045F04C) + iVar5, COW_IMG(COW_ADDR_LIFT_1045B83C) + iVar5, COW_IMG(COW_ADDR_LIFT_1045F04C) + iVar5, uVar1 }, g->ecx, g->edx, g->eax, 0u);
                uVar8 = rd32(COW_IMG(COW_ADDR_LIFT_10462430));
              }
              uVar4 = uVar4 + 1;
              iVar5 = iVar5 + 0x34;
            } while (uVar4 < uVar8);
          }
        }
        local_1c = local_1c + 1;
        local_18 = local_18 + 4u * (uint32_t)(5);
      } while (local_1c < 7);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 28 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1001a420(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x1cu;                      /* 0x1001a420: 28 bytes of locals */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10456D28) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1001a423: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1001a428: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1001a429: push ebp */
    g->ebp = g->ecx;   /* 0x1001a42a: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1001a42c: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1001a42d: push edi */
    cow_lift_1001a420(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
