/* f_0x102333f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102333f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    const uint32_t sp0 = g->esp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 100u);

    if ((int32_t)arg1 <= 1000) goto L_102334cd;
    wr16(sp0 - 0x50u, 0x40fu);
    wr32(sp0 - 0x4cu, 9u);
    wr32(sp0 - 0x44u, 9u);
    wr32(sp0 - 0x3cu, 9u);
    wr32(sp0 - 0x34u, 9u);
    wr32(sp0 - 0x2cu, 9u);
    wr32(sp0 - 0x24u, 9u);
    wr32(sp0 - 0x1cu, 9u);
    wr32(sp0 - 0x14u, 9u);
    wr32(sp0 - 0xcu, 9u);
    wr32(sp0 - 4u, 9u);
    wr16(sp0 - 0x4eu, 0x27u);
    wr16(sp0 - 0x48u, 0x410u);
    wr16(sp0 - 0x46u, 0x28u);
    wr16(sp0 - 0x40u, 0x411u);
    wr16(sp0 - 0x3eu, 0x29u);
    wr16(sp0 - 0x38u, 0x412u);
    wr16(sp0 - 0x36u, 0x2au);
    wr16(sp0 - 0x30u, 0x413u);
    wr16(sp0 - 0x2eu, 0x2bu);
    wr16(sp0 - 0x28u, 0x414u);
    wr16(sp0 - 0x26u, 0x2cu);
    wr16(sp0 - 0x20u, 0x415u);
    wr16(sp0 - 0x1eu, 0x2du);
    wr16(sp0 - 0x18u, 0x417u);
    wr16(sp0 - 0x16u, 0x2fu);
    wr16(sp0 - 0x10u, 0x418u);
    wr16(sp0 - 0xeu, 0x30u);
    wr16(sp0 - 8u, 0x419u);
    wr16(sp0 - 6u, 0x31u);
    eax = 0u;
L_102334be: ;
    if (arg1 == (uint32_t)(int16_t)rd16(eax * 8u + sp0 - 0x50u)) goto L_102334eb;
    if (eax + 1u < 0xau)
    {
        eax = eax + 1u;
        goto L_102334be;
    }
L_102334cd: ;
    eax = arg2;
    ecx = arg1;
L_102334d1: ;
    wr32(sp0 - 0x54u, arg5);
    wr32(sp0 - 0x58u, arg4);
    wr32(sp0 - 0x5cu, eax * arg3);
    wr32(sp0 - 0x60u, ecx);
    g->esp = sp0 - 0x50u;
    cow_cdecl(g, COW_IMG(0x10233500u), 4, ecx, eax * arg3, arg4, arg5);
    return;
L_102334eb: ;
    ecx = (uint32_t)(int16_t)rd16(eax * 8u + sp0 - 0x4eu);
    eax = rd32(eax * 8u + sp0 - 0x4cu);
    goto L_102334d1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102333f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102333f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
