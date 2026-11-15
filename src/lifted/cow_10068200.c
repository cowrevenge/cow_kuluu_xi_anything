/* f_0x10068200 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10068200 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10068200(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    CowU32 pcVar4;
    CowU32 pcVar5;
    pcVar5 = param_1 + 0x400;
      pcVar3 = pcVar5;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(0)), '\0');
        wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(1)), '\0');
        wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(2)), '\0');
        wr8((uint32_t)(pcVar3 + 1u * (uint32_t)(3)), '\0');
        pcVar3 = pcVar3 + 4;
      }
      pcVar3 = param_2;
      do {
        cVar1 = rd8((uint32_t)pcVar3);
        wr8((uint32_t)(pcVar3 + 1u * (uint32_t)((int)param_1 - (int)param_2)), cVar1);
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar2 = 0;
      pcVar3 = param_1;
    L_10068236:
      do {
        switch(rd8((uint32_t)param_2)) {
        case '\0':
        case '\n':
          wr8((uint32_t)pcVar3, '\0');
          wr32((uint32_t)(param_1 + 0x600), iVar2);
          g->eax = (CowU32)(iVar2); return;
        default:
          wr8((uint32_t)pcVar5, pcVar3);
          wr8((uint32_t)pcVar3, rd8((uint32_t)param_2));
          iVar2 = iVar2 + 1;
          pcVar5 = pcVar5 + 4;
          cVar1 = rd8((uint32_t)param_2);
          pcVar4 = pcVar3;
          while ((((pcVar3 = pcVar4 + 1, cVar1 != ' ' && (cVar1 != '\t')) && (cVar1 != '\n')) &&
                 (cVar1 != '\0'))) {
            pcVar4 = param_2 + 1;
            param_2 = param_2 + 1;
            wr8((uint32_t)pcVar3, rd8((uint32_t)pcVar4));
            pcVar4 = pcVar3;
            cVar1 = rd8((uint32_t)param_2);
          }
          wr8((uint32_t)pcVar4, '\0');
          if (rd8((uint32_t)param_2) != '\0') {
            param_2 = param_2 + 1;
          }
          break;
        case '\t':
        case ' ':
          param_2 = param_2 + 1;
          break;
        case '\"':
          param_2 = param_2 + 1;
          wr8((uint32_t)pcVar5, pcVar3);
          iVar2 = iVar2 + 1;
          pcVar5 = pcVar5 + 4;
          wr8((uint32_t)pcVar3, rd8((uint32_t)param_2));
          cVar1 = rd8((uint32_t)param_2);
          pcVar4 = pcVar3;
          while (pcVar3 = pcVar4 + 1, cVar1 != '\"') {
            if (cVar1 == '\0') goto L_10068236;
            pcVar4 = param_2 + 1;
            param_2 = param_2 + 1;
            wr8((uint32_t)pcVar3, rd8((uint32_t)pcVar4));
            pcVar4 = pcVar3;
            cVar1 = rd8((uint32_t)param_2);
          }
          wr8((uint32_t)pcVar4, '\0');
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10068200(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10068200: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10068201: push ebx */
    g->ebx = g->ecx;   /* 0x10068202: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10068204: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10068205: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->ebx + 0x400u)); }   /* 0x10068206: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1006820c: push edi */
    g->ecx = 128u;   /* 0x1006820d: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x10068212: the value the entry loaded and the decompiler dropped */
    g->edi = g->esi;   /* 0x10068214: the value the entry loaded and the decompiler dropped */
    cow_lift_10068200(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
