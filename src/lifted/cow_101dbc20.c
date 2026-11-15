/* f_0x101dbc20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101dbc20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101dbc20(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 puVar3;
    CowU32 uVar5;
    _Bool bVar4;
      
      iVar2 = cow_bridge_indirect(g, rd32((uint32_t)(g->eax + 0x54u)), COW_IMG(COW_ADDR_LIFT_101DBC29), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (iVar2 == param_2) {
        g->eax = (CowU32)(0); return;
      }
      iVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x64u))), COW_IMG(COW_ADDR_LIFT_101DBC3C), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 100)) == param_2) {
          g->eax = (CowU32)(0); return;
        }
      }
      else {
        iVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10663468))) + 0x58u))))) + 0x54u))), COW_IMG(COW_ADDR_LIFT_101DBC5F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 == param_2) {
          g->eax = (CowU32)(0); return;
        }
      }
      if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663468)) + 0x70)) == '\0') {
        switch(param_2) {
        case 1:
        case 2:
        case 4:
        case 9:
          goto switchD_101dbc83_caseD_1;
        }
      }
      else if (((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663468)) + 0x71)) == '\x01') && (param_2 == 2)) {
        g->eax = (CowU32)(0); return;
      }
      switch(param_2 + -4) {
      case 0:
        cVar1 = cow_bridge_101cc470(g, COW_IMG(COW_ADDR_LIFT_101DBCD8), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        goto L_101dbd20;
      case 1:
        cVar1 = cow_bridge_100ec470(g, COW_IMG(COW_ADDR_LIFT_101DBCB3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        goto L_101dbd20;
      case 2:
        uVar5 = rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E44)));
        break;
      default:
        goto switchD_101dbca7_caseD_3;
      case 5:
        iVar2 = cow_bridge_100f97a0(g, COW_IMG(COW_ADDR_LIFT_101DBCCA), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, g->eax, 4u);
        bVar4 = iVar2 == 0;
        goto L_101dbd22;
      case 6:
        puVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10666E50));
        goto L_101dbd15;
      case 7:
        uVar5 = rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E54)));
        break;
      case 8:
        uVar5 = rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E58)));
        break;
      case 9:
        puVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10666E5C));
        goto L_101dbd15;
      case 10:
        uVar5 = rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E60)));
        break;
      case 0xb:
        uVar5 = rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10666E64)));
        break;
      case 0xc:
        puVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10666E68));
    L_101dbd15:
        uVar5 = rd32((uint32_t)puVar3);
      }
      cVar1 = cow_bridge_100eb940(g, COW_IMG(COW_ADDR_LIFT_101DBD1D), 1u, (const CowU32[]){ uVar5 }, g->ecx, g->edx, g->eax, 4u);
    L_101dbd20:
      bVar4 = cVar1 == '\0';
    L_101dbd22:
      if (bVar4) {
    switchD_101dbc83_caseD_1:
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
    switchD_101dbca7_caseD_3:
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101dbc20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101dbc20: push esi */
    g->esi = g->ecx;   /* 0x101dbc21: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101dbc23: push edi */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x101dbc24: register eax, replayed as the entry ran it */
    cow_lift_101dbc20(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
