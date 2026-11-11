/* f_0x102297c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102297c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102297c0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if (param_2 != (CowU32)0x0) {
        iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103862C8) + param_1 * 8));
        switch(iVar1) {
        case 0:
        case 1:
        case 2:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 4 + iVar1 * 4)));
          return;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 10 + iVar1 * 2)));
          return;
        case 8:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x1a)));
          return;
        case 9:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x1c)));
          return;
        case 10:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x1e)));
          return;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + -0xc + iVar1 * 4)));
          return;
        case 0x14:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x44)));
          return;
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(iVar1 + 0x33 + param_3)));
          return;
        case 0x1d:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x50)));
          return;
        case 0x1e:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x54)));
          return;
        case 0x1f:
        case 0x20:
        case 0x21:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x1a + iVar1 * 2)));
          return;
        case 0x22:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x60)));
          return;
        case 0x23:
        case 0x24:
        case 0x25:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(iVar1 + 0x41 + param_3)));
          return;
        case 0x26:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x68)));
          return;
        case 0x27:
        case 0x28:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x1e + iVar1 * 2)));
          return;
        case 0x29:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x70)));
          return;
        case 0x2a:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x74)));
          return;
        case 0x2b:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x78)));
          return;
        case 0x2c:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x7c)));
          return;
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + -0x34 + iVar1 * 4)));
          return;
        case 0x32:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x94)));
          return;
        case 0x33:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x98)));
          return;
        case 0x34:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x9c)));
          return;
        case 0x35:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xa0)));
          return;
        case 0x36:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xa4)));
          return;
        case 0x37:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xac)));
          return;
        case 0x38:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xb0)));
          return;
        case 0x39:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xb4)));
          return;
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(iVar1 + 0x7e + param_3)));
          return;
        case 0x3f:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(param_3 + 0xbd)));
          return;
        case 0x40:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(param_3 + 0xcc)));
          return;
        case 0x41:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(param_3 + 0xbe)));
          return;
        case 0x42:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(param_3 + 0xbf)));
          return;
        case 0x43:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xc0)));
          return;
        case 0x44:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xc4)));
          return;
        case 0x45:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 200)));
          return;
        case 0x46:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x5e)));
          return;
        case 0x47:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xa8)));
          return;
        case 0x48:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xd8)) & 0x1ff);
          return;
        case 0x49:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xd8)) >> 9 & 0x1ff);
          return;
        case 0x4a:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xd8)) >> 0x12 & 0x1ff);
          return;
        case 0x4b:
          wr32((uint32_t)param_2, (rd8((uint32_t)(param_3 + 0xdc)) & 0xf) << 5 | rd32((uint32_t)(param_3 + 0xd8)) >> 0x1b);
          return;
        case 0x4c:
          wr32((uint32_t)param_2, (rd16((uint32_t)(param_3 + 0xdc)) & 0x1ff0) >> 4);
          return;
        case 0x4d:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xe4)));
          return;
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(iVar1 + 0x80 + param_3)));
          return;
        case 0x58:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xe0)));
          return;
        case 0x59:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xaa)));
          return;
        case 0x5a:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xe8)) & 0xffff);
          return;
        case 0x5b:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xea)));
          return;
        case 0x5c:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xec)) & 0xffff);
          return;
        case 0x5d:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xee)));
          return;
        case 0x5e:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xf0)) & 0xffff);
          return;
        case 0x5f:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xf2)));
          return;
        case 0x60:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xf4)) & 0xffff);
          return;
        case 0x61:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xf6)));
          return;
        case 0x62:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0xf8)));
          return;
        default:
          wr32((uint32_t)param_2, 0);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102297c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x102297c0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102297c4: push esi */
    cow_lift_102297c0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
