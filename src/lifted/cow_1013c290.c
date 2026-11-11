/* f_0x1013c290 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013c290 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013c290(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    int iVar6;
    int iVar7;
    CowU16 uVar9;
    CowU16 extraout_var;
    int iVar8;
    int iVar10;
    int iVar11;
    int local_10;
    int local_c;
    CowU32 local_8;
    CowU32 local_4;
    _Bool bVar3;
      _Bool bVar4;
      _Bool bVar5;
      
      if (rd32((uint32_t)(param_1 + 0x1c)) != 0) {
        pcVar1 = (CowU32)(param_1 + 300);
        wr8((uint32_t)(param_1 + 899), 1);
        iVar11 = 1;
        uVar9 = (CowU16)((CowU32)param_1 >> 0x10);
        local_c = 0;
        if (rd8((uint32_t)pcVar1) != '\0') {
          local_c = cow_bridge_101ca520(g, COW_IMG(COW_ADDR_LIFT_1013C2D3), 3u, (const CowU32[]){ (g->esi + 300u), (g->esi + 300u), 272039540u }, g->ecx, g->edx, g->eax, 12u);
          uVar9 = extraout_var;
        }
        if ((rd32((uint32_t)(param_1 + 0x374)) & 1) != 0) {
          wr8((uint32_t)(param_1 + 0x2c), 0);
        }
        local_4 = (CowU32)(rd8((uint32_t)(param_1 + 0x2c)) != '\0');
        if ((rd32((uint32_t)(param_1 + 0x374)) & 2) != 0) {
          wr8((uint32_t)(param_1 + 0xac), 0);
        }
        local_8 = (CowU32)(rd8((uint32_t)(param_1 + 0xac)) != '\0');
        cVar2 = rd8((uint32_t)(param_1 + 0x278));
        local_10 = 0;
        if (rd8((uint32_t)(param_1 + 0x1b8)) != '\0') {
          local_10 = cow_bridge_101ca520(g, COW_IMG(COW_ADDR_LIFT_1013C349), 3u, (const CowU32[]){ (((uint32_t)(uVar9) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x34c))) & 0xffffu)), param_1 + 0x1b8, COW_IMG(COW_ADDR_LIFT_1036FE74) }, g->ecx, g->edx, g->eax, 12u);
        }
        bVar3 = 0;
        bVar5 = 0;
        bVar4 = 0;
        pcVar1 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 0x1c)) + 0x154c));
        if ((pcVar1 == (CowU32)0x0) || (rd8((uint32_t)pcVar1) != '\x01')) {
          bVar3 = 1;
        }
        else if (0 < local_10) {
          if (((rd8((uint32_t)(param_1 + 0x2c)) == '\0') && (rd8((uint32_t)(param_1 + 0xac)) == '\0')) &&
             (rd8((uint32_t)(param_1 + 0x278)) == '\0')) {
            bVar5 = 1;
          }
          else {
            bVar4 = 1;
          }
        }
        iVar6 = cow_bridge_1015b1e0(g, COW_IMG(COW_ADDR_LIFT_1013C3AB), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
        iVar8 = (((0xc - (CowU32)(cVar2 != '\0')) - local_8) - local_4) - local_c;
        iVar7 = iVar8 + -1;
        if (bVar5) {
          iVar7 = iVar8 + -2;
        }
        iVar10 = 0;
        if (0 < iVar6) {
          do {
            if (iVar7 + -1 <= iVar10) break;
            wr8((uint32_t)(param_1 + 899 + iVar11), (char)iVar10 + '\n');
            iVar11 = iVar11 + 1;
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar6);
        }
        if (bVar3) {
          iVar8 = iVar8 - iVar11;
          iVar7 = 0;
          if (0 < local_10) {
            do {
              if (iVar8 + -1 <= iVar7) break;
              wr8((uint32_t)(param_1 + 899 + iVar11), (char)iVar7 + '\x1e');
              iVar11 = iVar11 + 1;
              iVar7 = iVar7 + 1;
            } while (iVar7 < local_10);
          }
        }
        if ((rd8((uint32_t)(param_1 + 300)) != '\0') && (iVar7 = 0, 0 < local_c)) {
          do {
            wr8((uint32_t)(param_1 + 899 + iVar11), (char)iVar7 + '2');
            iVar11 = iVar11 + 1;
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        if (rd8((uint32_t)(param_1 + 0x2c)) != '\0') {
          wr8((uint32_t)(iVar11 + 899 + param_1), 0x3c);
          iVar11 = iVar11 + 1;
        }
        if (rd8((uint32_t)(param_1 + 0xac)) != '\0') {
          wr8((uint32_t)(iVar11 + 899 + param_1), 0x3d);
          iVar11 = iVar11 + 1;
        }
        if (rd8((uint32_t)(param_1 + 0x278)) != '\0') {
          wr8((uint32_t)(iVar11 + 899 + param_1), 0x3e);
          iVar11 = iVar11 + 1;
        }
        if ((bVar4) &&
           (((cVar2 = rd8((uint32_t)(iVar11 + 0x382 + param_1)), cVar2 == '<' || (cVar2 == '=')) ||
            (cVar2 == '>')))) {
          wr8((uint32_t)(iVar11 + 0x382 + param_1), cVar2 + '\n');
        }
        if (bVar5) {
          wr8((uint32_t)(iVar11 + 899 + param_1), 0x50);
        }
        if ((0 < local_10) && (!bVar3)) {
          iVar11 = 0;
          wr8((uint32_t)(param_1 + 0x38f), 1);
          iVar7 = 1;
          if (0 < local_10) {
            do {
              wr8((uint32_t)(param_1 + 0x38f + iVar7), (char)iVar11 + '\x1e');
              iVar7 = iVar7 + 1;
              iVar11 = iVar11 + 1;
            } while (iVar11 < local_10);
          }
          if (rd8((uint32_t)(param_1 + 0x278)) != '\0') {
            wr8((uint32_t)(iVar7 + 0x38f + param_1), 0x48);
            return;
          }
          wr8((uint32_t)(iVar7 + 0x38f + param_1), 0x50);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 20 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013c290(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x14u;                      /* 0x1013c290: 20 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1013c293: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1013c294: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013c295: push esi */
    g->esi = g->ecx;   /* 0x1013c296: the value the entry loaded and the decompiler dropped */
    g->ebp = 0u;   /* 0x1013c298: the value the entry loaded and the decompiler dropped */
    cow_lift_1013c290(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
