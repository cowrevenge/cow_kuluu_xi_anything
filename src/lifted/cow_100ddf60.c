/* f_0x100ddf60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100ddf60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    wr32(sp0 - 8u, rd32(arg1));
    t1 = rd32(arg1 + 4u);
    wr32(sp0 - 4u, t1);
    if ((int32_t)(rd32(arg1) >> 3u & 0x3fu) < 56)
    {
        eax = rd32(arg1) >> 3u & 0x3fu;
        ecx = 0x38u;
    }
    else
    {
        eax = rd32(arg1) >> 3u & 0x3fu;
        ecx = 0x78u;
    }
    wr32(sp0 - 0x4cu, ecx - eax);
    wr32(sp0 - 0x50u, COW_IMG(0x10361388u));
    wr32(sp0 - 0x54u, arg1);
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x100ddec0u), 3, arg1, COW_IMG(0x10361388u), ecx - eax);
    eax = arg1 + 0x1au;
    esi = 0u;
L_100ddfa1: ;
    t2 = ((rd8(eax + 1u) << 8u | rd8(eax)) << 8u | rd8(eax - 1u)) << 8u | rd8(eax - 2u);
    t3 = rd8(eax - 2u);
    wr32(esi * 4u + sp0 - 0x40u, t2);
    if (esi + 1u < 0xeu)
    {
        eax = eax + 4u;
        esi = esi + 1u;
        goto L_100ddfa1;
    }
    ecx = t3;
    wr32(sp0 - 0x4cu, sp0 - 0x40u);
    wr32(sp0 - 0x50u, arg1 + 8u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x100de010u), 2, arg1 + 8u, sp0 - 0x40u);
    t4 = g->edx;
    eax = arg1 + 0xau;
    ecx = arg1 + 0x59u;
    edx = t4;
    esi = 4u;
L_100ddfe5: ;
    t5 = rd8(eax - 2u);
    wr8(ecx - 1u, (uint8_t)t5);
    t6 = rd8(eax - 1u);
    wr8(ecx, (uint8_t)t6);
    t7 = rd8(eax);
    wr8(ecx + 1u, (uint8_t)t7);
    t8 = rd8(eax + 1u);
    wr8(ecx + 2u, (uint8_t)t8);
    if (esi != 1u)
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        edx = ((edx | t5 | t6 | t7) & 0xffffff00u) | t8;
        esi = esi - 1u;
        goto L_100ddfe5;
    }
    eax = eax + 4u;
    g->esi = rd32(sp0 - 0x44u);
    g->edi = rd32(sp0 - 0x48u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ddf60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ddf60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
