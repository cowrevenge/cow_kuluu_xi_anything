/* f_0x101dbdb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101dbdb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101dbdb0(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    char cVar2;
    CowU32 uVar3;
    if (((int8_t)rd8((uint32_t)(param_1 + 4)) != '\0') && ((int8_t)rd8((uint32_t)(param_1 + 6)) == (int8_t)rd8((uint32_t)(param_2 + 2)))) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(-0x7f7fbfe0) & 0xffu)); return;
      }
      switch(rd32((uint32_t)(param_1 + 0xc))) {
      case 0:
      case 8:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
        cVar2 = cow_bridge_10131f10(g, COW_IMG(COW_ADDR_LIFT_101DBDFA), 2u, (const CowU32[]){ rd8((uint32_t)(param_2 + 2)), rd32((uint32_t)(param_1 + 0xc)) }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 != '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(-0x7faf6fb0) & 0xffu)); return;
        }
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0xc)) == 2) {
        cVar2 = cow_bridge_101334c0(g, COW_IMG(COW_ADDR_LIFT_101DBE23), 3u, (const CowU32[]){ rd8((uint32_t)(param_2 + 2)), 0xffffffff, 1 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 != '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(-0x7fbfbfc0) & 0xffu)); return;
        }
        cVar2 = cow_bridge_101334c0(g, COW_IMG(COW_ADDR_LIFT_101DBE44), 3u, (const CowU32[]){ rd8((uint32_t)(param_2 + 2)), 0xffffffff, 9 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 != '\0') {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(-0x7fbfbfc0) & 0xffu)); return;
        }
      }
      if (((((int32_t)rd32((uint32_t)(param_1 + 0xc)) == 1) || ((int32_t)rd32((uint32_t)(param_1 + 0xc)) == 9)) &&
          ((sVar1 = rd16((uint32_t)rd32((uint32_t)((param_3 + 0x14b4)))), sVar1 == 10 || ((sVar1 == 0xc || (sVar1 == 0xe))))))
         && ((rd8((uint32_t)(param_2 + 0x11)) & 0x40) != 0)) {
        uVar3 = cow_bridge_100f1080(g, COW_IMG(COW_ADDR_LIFT_101DBE86), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)((-(CowU32)(uVar3 != (rd8((uint32_t)(param_2 + 0x11)) & 3)) & 0x1fdfe0) + 0x80404040); return;
      }
      g->eax = (CowU32)(-0x7f7f7f80); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101dbdb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101dbdb0: push esi */
    g->esi = g->ecx;   /* 0x101dbdb1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101dbdb3: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x101dbdb4: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101dbdb8: register eax, replayed as the entry ran it */
    cow_lift_101dbdb0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
