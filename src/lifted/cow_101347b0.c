/* f_0x101347b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101347b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101347b0(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    CowU32 piVar6;
    int iVar7;
    _Bool bVar1;
      
      if ((param_3 == '\0') || ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578170)) + 8)) != 0)) {
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781B8)) + 0x14e), 0);
      }
      else {
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781B8)) + 0x14e), 1);
      }
      iVar3 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) != 0) {
        iVar3 = cow_bridge_101597f0(g, COW_IMG(COW_ADDR_LIFT_101347F0), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      }
      if (((rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) && (rd32(COW_IMG(COW_ADDR_LIFT_105781B8)) != 0)) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781B8)) + 0x74)) == 0)) {
        if (param_2 == 0) {
          if (iVar3 == 0) {
            param_2 = 0;
          }
          else {
            param_2 = (int32_t)rd32((uint32_t)(iVar3 + 4));
          }
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_105781C4)) == 0) {
          cow_bridge_100e55f0(g, COW_IMG(COW_ADDR_LIFT_10134842), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          iVar7 = cow_bridge_100e56e0(g, COW_IMG(COW_ADDR_LIFT_10134849), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((param_2 == iVar7) && (uVar4 = cow_bridge_100dc130(g, COW_IMG(COW_ADDR_LIFT_10134852), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), uVar4 < rd32(COW_IMG(COW_ADDR_LIFT_105781C4)) + 2U)) {
            return;
          }
        }
        if (param_2 != 0) {
          bVar1 = 0;
          iVar7 = 0;
          do {
            if ((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar7))) != 0) &&
               (puVar5 = (CowU32)cow_bridge_1008b380(g, COW_IMG(COW_ADDR_LIFT_10134884), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u), puVar5 != (CowU32)0x0))
            goto L_101348c1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x400);
          iVar7 = 0x400;
          while ((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar7))) == 0 ||
                 (puVar5 = (CowU32)cow_bridge_1008b380(g, COW_IMG(COW_ADDR_LIFT_101348A9), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u), puVar5 == (CowU32)0x0))) {
            puVar5 = (CowU32)0x0;
            iVar7 = iVar7 + 1;
            if (0x8ff < iVar7) goto L_10134935;
          }
          bVar1 = 1;
    L_101348c1:
          iVar7 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar7)));
          if ((((CowU8)rd32((uint32_t)(iVar7 + 0x13c)) & 0x40) == 0x40) &&
             (cVar2 = cow_bridge_10133a40(g, COW_IMG(COW_ADDR_LIFT_101348DC), 1u, (const CowU32[]){ iVar7 }, g->ecx, g->edx, g->eax, 4u), cVar2 == '\0')) {
            cow_bridge_1007bf30(g, COW_IMG(COW_ADDR_LIFT_101348F5), 5u, (const CowU32[]){ iVar3, 2, 0, 0, 0 }, g->ecx, g->edx, g->eax, 20u);
          }
          else if ((bVar1) || ((rd32((uint32_t)(iVar7 + 0x120)) >> 0xd & 1) != 0)) {
            cow_bridge_100e5660(g, COW_IMG(COW_ADDR_LIFT_10134921), 3u, (const CowU32[]){ rd32((uint32_t)puVar5), rd32((uint32_t)(puVar5 + 4u * (uint32_t)(1))), param_4 }, g->ecx, g->edx, g->eax, 12u);
            wr32(COW_IMG(COW_ADDR_LIFT_105781C4), cow_bridge_100dc130(g, COW_IMG(COW_ADDR_LIFT_10134929), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u));
            wr32(COW_IMG(COW_ADDR_LIFT_105781C0), 0);
          }
    L_10134935:
          if (puVar5 == (CowU32)0x0) {
            piVar6 = COW_IMG(COW_ADDR_LIFT_10481AF0);
            while ((rd32((uint32_t)piVar6) == 0 ||
                   (puVar5 = (CowU32)cow_bridge_1008b380(g, COW_IMG(COW_ADDR_LIFT_1013494B), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u), puVar5 == (CowU32)0x0))) {
              piVar6 = piVar6 + 4u * (uint32_t)(1);
              if (0x10482eef < (int)piVar6) {
                return;
              }
            }
            cow_bridge_100e5660(g, COW_IMG(COW_ADDR_LIFT_1013496F), 3u, (const CowU32[]){ rd32((uint32_t)puVar5), rd32((uint32_t)(puVar5 + 4u * (uint32_t)(1))), param_4 }, g->ecx, g->edx, g->eax, 12u);
            wr32(COW_IMG(COW_ADDR_LIFT_105781C4), cow_bridge_100dc130(g, COW_IMG(COW_ADDR_LIFT_10134977), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u));
            wr32(COW_IMG(COW_ADDR_LIFT_105781C0), 0);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebp, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101347b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101347b0: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101347b1: register eax, replayed as the entry ran it */
    cow_lift_101347b0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
