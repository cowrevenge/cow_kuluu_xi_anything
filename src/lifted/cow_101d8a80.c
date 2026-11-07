/* f_0x101d8a80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d8a80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d8a80(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    uVar1 = 0;
      switch(param_1) {
      case 1:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8AA9), 2u, (const CowU32[]){ 12u, 220u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 2:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8AB9), 2u, (const CowU32[]){ 12u, 221u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 3:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8AC9), 2u, (const CowU32[]){ 12u, 222u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 4:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8AD9), 2u, (const CowU32[]){ 12u, 223u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 5:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8AE9), 2u, (const CowU32[]){ 12u, 224u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 6:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8AF9), 2u, (const CowU32[]){ 12u, 225u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 7:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B09), 2u, (const CowU32[]){ 12u, 226u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 8:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B19), 2u, (const CowU32[]){ 12u, 227u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 9:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B29), 2u, (const CowU32[]){ 12u, 228u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 10:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B39), 2u, (const CowU32[]){ 12u, 229u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0xb:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B49), 2u, (const CowU32[]){ 12u, 230u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0xc:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B59), 2u, (const CowU32[]){ 12u, 231u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0xd:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B69), 2u, (const CowU32[]){ 12u, 232u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0xe:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B79), 2u, (const CowU32[]){ 12u, 233u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0xf:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B89), 2u, (const CowU32[]){ 12u, 234u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x10:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8B99), 2u, (const CowU32[]){ 12u, 235u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x11:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8BA9), 2u, (const CowU32[]){ 12u, 236u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x12:
      case 0x1b:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8BB9), 2u, (const CowU32[]){ 12u, 239u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x13:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8BC9), 2u, (const CowU32[]){ 12u, 241u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x14:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8BD9), 2u, (const CowU32[]){ 12u, 242u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x15:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8BE9), 2u, (const CowU32[]){ 12u, 237u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x16:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8BF9), 2u, (const CowU32[]){ 12u, 240u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x17:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C09), 2u, (const CowU32[]){ 12u, 244u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x18:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C19), 2u, (const CowU32[]){ 12u, 245u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x19:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C29), 2u, (const CowU32[]){ 12u, 243u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x1a:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C39), 2u, (const CowU32[]){ 12u, 238u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x1c:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C49), 2u, (const CowU32[]){ 12u, 246u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x1d:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C59), 2u, (const CowU32[]){ 12u, 247u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x1e:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C69), 2u, (const CowU32[]){ 12u, 250u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x1f:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C79), 2u, (const CowU32[]){ 12u, 249u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x20:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C89), 2u, (const CowU32[]){ 12u, 248u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x21:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8C99), 2u, (const CowU32[]){ 12u, 253u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x22:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8CA9), 2u, (const CowU32[]){ 12u, 254u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x23:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8CB9), 2u, (const CowU32[]){ 12u, 271u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x24:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8CC9), 2u, (const CowU32[]){ 12u, 274u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x25:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8CD9), 2u, (const CowU32[]){ 12u, 276u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x26:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8CE9), 2u, (const CowU32[]){ 12u, 255u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x27:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8CF9), 2u, (const CowU32[]){ 12u, 256u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x28:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D09), 2u, (const CowU32[]){ 12u, 257u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x29:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D19), 2u, (const CowU32[]){ 12u, 258u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x2a:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D29), 2u, (const CowU32[]){ 12u, 259u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x2b:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D39), 2u, (const CowU32[]){ 12u, 260u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x2c:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D49), 2u, (const CowU32[]){ 12u, 261u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x2d:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D59), 2u, (const CowU32[]){ 12u, 252u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x2e:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D69), 2u, (const CowU32[]){ 12u, 272u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x2f:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D79), 2u, (const CowU32[]){ 12u, 279u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x30:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D89), 2u, (const CowU32[]){ 12u, 280u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x31:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8D99), 2u, (const CowU32[]){ 12u, 275u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x32:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8DA9), 2u, (const CowU32[]){ 12u, 273u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x33:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8DB9), 2u, (const CowU32[]){ 12u, 270u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x34:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8DC9), 2u, (const CowU32[]){ 12u, 262u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x35:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8DD9), 2u, (const CowU32[]){ 12u, 263u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x36:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8DE9), 2u, (const CowU32[]){ 12u, 264u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x37:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8DF9), 2u, (const CowU32[]){ 12u, 265u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x38:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E09), 2u, (const CowU32[]){ 12u, 266u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x39:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E19), 2u, (const CowU32[]){ 12u, 267u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x3a:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E29), 2u, (const CowU32[]){ 12u, 268u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x3b:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E39), 2u, (const CowU32[]){ 12u, 269u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x3c:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E49), 2u, (const CowU32[]){ 12u, 251u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x3d:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E59), 2u, (const CowU32[]){ 12u, 277u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x3e:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E69), 2u, (const CowU32[]){ 12u, 281u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x3f:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E79), 2u, (const CowU32[]){ 12u, 283u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x40:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E89), 2u, (const CowU32[]){ 12u, 282u }, g->ecx, g->edx, 0u, 8u);
        g->eax = (CowU32)(uVar1); return;
      case 0x41:
        uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101D8E99), 2u, (const CowU32[]){ 12u, 284u }, g->ecx, g->edx, 0u, 8u);
      }
      g->eax = (CowU32)(uVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d8a80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = param_1;   /* 0x101d8a80: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x101d8a84: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x101d8a86: register ecx, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a - 1u); g->ecx = (uint32_t)(r); }; }   /* 0x101d8a8c: register ecx, replayed as the entry ran it */
    cow_lift_101d8a80(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
