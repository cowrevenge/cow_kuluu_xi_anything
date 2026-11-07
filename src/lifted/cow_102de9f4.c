/* f_0x102de9f4 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102de9f4 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102de9f4(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pbVar1;
    CowU8 bVar2;
    int iVar3;
    CowU32 pbVar4;
    CowU32 puVar5;
    CowU32 pbVar6;
    CowU32 pbVar7;
    int iVar8;
    CowU32 local_c;
    CowU32 local_8;
    puVar5 = rd8((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x18));
      iVar3 = rd32((uint32_t)param_1);
      pbVar4 = rd8((uint32_t)(iVar3 + 0x18));
      iVar8 = rd32((uint32_t)(iVar3 + 0x1050));
      pbVar6 = pbVar4 + rd32((uint32_t)(iVar3 + 0x105c)) * iVar8;
      for (; pbVar4 < pbVar6; pbVar4 = pbVar4 + iVar8 * 2) {
        iVar3 = rd32((uint32_t)(iVar3 + 0x1058));
        pbVar7 = pbVar4 + iVar8;
        local_c = puVar5;
        local_8 = pbVar4;
        while (local_8 < pbVar4 + iVar3) {
          pbVar1 = local_8 + 1;
          bVar2 = rd8((uint32_t)local_8);
          local_8 = local_8 + 2;
          wr8((uint32_t)local_c, (char)((CowU32)rd8((uint32_t)(pbVar7 + 1u * (uint32_t)(1))) + (CowU32)rd8((uint32_t)pbVar1) + (CowU32)rd8((uint32_t)pbVar7) + 2 + (CowU32)bVar2 >> 2));
          pbVar7 = pbVar7 + 2;
          local_c = local_c + 1;
        }
        puVar5 = puVar5 + rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1050));
        iVar3 = rd32((uint32_t)param_1);
        iVar8 = rd32((uint32_t)(iVar3 + 0x1050));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102de9f4(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102de9f4: push ebp */
    g->ebp = g->esp;                       /* 0x102de9f5: mov ebp, esp */
    g->esp -= 0x10u;                      /* 0x102de9f7: 16 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102de9fa: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102de9fd: push ebx */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102de9fe: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (uint32_t)(rd32(A)); }   /* 0x102dea01: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->edx = (uint32_t)(rd32(A)); }   /* 0x102dea03: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102dea06: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x105Cu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102dea07: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102dea0d: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x1050u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102dea0e: register edi, replayed as the entry ran it */
    cow_lift_102de9f4(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
