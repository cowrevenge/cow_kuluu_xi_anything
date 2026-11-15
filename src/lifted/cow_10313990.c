/* f_0x10313990 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10313990 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10313990(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    CowU8 bVar6;
    CowU32 uVar7;
    CowU32 local_c;
    CowU32 local_8;
    local_c = 0;
      bVar6 = rd8((uint32_t)param_1);
      pbVar1 = param_1;
      while( 1 ) {
        local_8 = pbVar1 + 1;
        if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
          uVar2 = (CowU8)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + 4u * (uint32_t)((CowU32)bVar6 * 2))) & 8;
        }
        else {
          uVar2 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_103139BC), 2u, (const CowU32[]){ bVar6, 8 }, g->ecx, g->edx, g->eax, 0u);
        }
        if (uVar2 == 0) break;
        bVar6 = rd8((uint32_t)local_8);
        pbVar1 = local_8;
      }
      if (bVar6 == 0x2d) {
        param_4 = param_4 | 2;
    L_103139eb:
        bVar6 = rd8((uint32_t)local_8);
        local_8 = pbVar1 + 2;
      }
      else if (bVar6 == 0x2b) goto L_103139eb;
      if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
        if (param_2 != (CowU32)0x0) {
          wr32((uint32_t)param_2, (int)param_1);
        }
        g->eax = (CowU32)(0); return;
      }
      if (param_3 == 0) {
        if (bVar6 != 0x30) {
          param_3 = 10;
          goto L_10313a55;
        }
        if ((rd8((uint32_t)local_8) != 0x78) && (rd8((uint32_t)local_8) != 0x58)) {
          param_3 = 8;
          goto L_10313a55;
        }
        param_3 = 0x10;
      }
      if (((param_3 == 0x10) && (bVar6 == 0x30)) && ((rd8((uint32_t)local_8) == 0x78 || (rd8((uint32_t)local_8) == 0x58)))) {
        bVar6 = rd8((uint32_t)(local_8 + 1u * (uint32_t)(1)));
        local_8 = local_8 + 2;
      }
    L_10313a55:
      uVar2 = (CowU32)(0xffffffff / (uint64_t)param_3);
      do {
        uVar7 = (CowU32)bVar6;
        if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
          uVar3 = (CowU8)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + 4u * (uint32_t)(uVar7 * 2))) & 4;
        }
        else {
          uVar3 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_10313A79), 2u, (const CowU32[]){ uVar7, 4 }, g->ecx, g->edx, g->eax, 0u);
        }
        if (uVar3 == 0) {
          if (rd32(COW_IMG(COW_ADDR_LIFT_103D023C)) < 2) {
            uVar7 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103D0030)) + uVar7 * 2)) & 0x103;
          }
          else {
            uVar7 = cow_bridge_10315180(g, COW_IMG(COW_ADDR_LIFT_10313AA4), 2u, (const CowU32[]){ uVar7, 0x103 }, g->ecx, g->edx, g->eax, 0u);
          }
          if (uVar7 == 0) {
    L_10313b01:
            local_8 = local_8 + -1;
            if ((param_4 & 8) == 0) {
              if (param_2 != (CowU32)0x0) {
                local_8 = param_1;
              }
              local_c = 0;
            }
            else if (((param_4 & 4) != 0) ||
                    (((param_4 & 1) == 0 &&
                     ((((param_4 & 2) != 0 && (0x80000000 < local_c)) ||
                      (((param_4 & 2) == 0 && (0x7fffffff < local_c)))))))) {
              puVar5 = (CowU32)cow_bridge_10319c89(g, COW_IMG(COW_ADDR_LIFT_10313B47), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)puVar5, 0x22);
              if ((param_4 & 1) == 0) {
                local_c = ((param_4 & 2) != 0) + 0x7fffffff;
              }
              else {
                local_c = 0xffffffff;
              }
            }
            if (param_2 != (CowU32)0x0) {
              wr32((uint32_t)param_2, (int)local_8);
            }
            if ((param_4 & 2) != 0) {
              local_c = -local_c;
            }
            g->eax = (CowU32)(local_c); return;
          }
          iVar4 = cow_bridge_10313bb4(g, COW_IMG(COW_ADDR_LIFT_10313AC0), 1u, (const CowU32[]){ (int)(char)bVar6 }, g->ecx, g->edx, g->eax, 0u);
          uVar7 = iVar4 - 0x37;
        }
        else {
          uVar7 = (int)(char)bVar6 - 0x30;
        }
        if (param_3 <= uVar7) goto L_10313b01;
        if ((local_c < uVar2) ||
           ((local_c == uVar2 && (uVar7 <= (CowU32)(0xffffffff % (uint64_t)param_3))))) {
          local_c = local_c * param_3 + uVar7;
          param_4 = param_4 | 8;
        }
        else {
          param_4 = param_4 | 0xc;
        }
        bVar6 = rd8((uint32_t)local_8);
        local_8 = local_8 + 1;
      } while( 1 );
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
void cow_adapter_10313990(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10313990: push ebp */
    g->ebp = g->esp;                       /* 0x10313991: mov ebp, esp */
    g->esp -= 0xcu;                      /* 0x10313993: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10313996: push ebx */
    cow_lift_10313990(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
