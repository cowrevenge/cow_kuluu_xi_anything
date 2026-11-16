/* f_0x101459d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101459d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd16(sp0 + 4u) != 5u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(sp0 + 4u);
        goto L_10145a45;
    }
    if ((int16_t)rd16(sp0 + 8u) <= 0)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u);
        edx = in_edx;
        goto L_10145a8d;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u);
    if ((int32_t)eax <= 2) goto L_10145a1c;
    if (eax != 3u)
    {
        edx = in_edx;
        goto L_10145a8d;
    }
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        edx = in_edx;
        goto L_10145a8d;
    }
    ecx = rd32(COW_IMG(0x106631d4u));
    t1 = (eax & 0xffffff00u) | rd8(COW_IMG(0x10485640u));
    t2 = rd8(COW_IMG(0x10485642u));
    wr32(sp0 + 8u, t1);
    t3 = (in_edx & 0xffffff00u) | t2;
    wr32(sp0 + 4u, t3);
    g->esp = sp0;
    g->edx = t3;
    return cow_tailcall(g, COW_IMG(0x101d32c0u), t1, ecx, t3);
L_10145a1c: ;
    if (rd32(COW_IMG(0x105782c0u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x105782c0u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x105782c0u));
        wr32(ecx + 0x14u, eax);
    }
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t4 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 6u);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0;
    t6 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, t4, 1u, 0u);
    t7 = g->edx;
    g->edx = t7;
    return t6;
L_10145a45: ;
    if ((uint16_t)eax != 6u)
    {
        edx = in_edx;
        goto L_10145a8d;
    }
    g->edx = in_edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x103715f8u));
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_cdecl(g, COW_IMG(0x101cc070u), 1, 0u);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        edx = t11;
        goto L_10145a7e;
    }
    edx = t11;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036fff0u), 1u, 0u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_10145a7e: ;
    g->edx = edx;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10371648u), 1u, 0u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_10145a8d: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101459d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101459d0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
