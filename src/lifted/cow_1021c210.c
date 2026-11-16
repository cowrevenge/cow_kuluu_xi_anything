/* f_0x1021c210 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1021c210(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(sp0 + 8u);
    t2 = self + (uint8_t)t1 * 0x18u;
    t3 = rd16(self + (uint8_t)t1 * 0x18u + 0x80u);
    wr32(sp0 + 8u, t2);
    if ((uint16_t)t3 != 0u)
    {
        eax = t2;
        ecx = (self & 0xffff0000u) | t3;
        edi = t1;
        goto L_1021c25c;
    }
    edi = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_thiscall(g, COW_IMG(0x1015bc40u), rd32(COW_IMG(0x10621808u)), 1, rd16(arg1));
    t5 = g->edx;
    if (t4 == 0u)
    {
        edx = t5;
        ebx = t4;
    }
    else
    {
        edx = t5;
        ebx = t4;
        wr8(ebx + 0x1b3u, (uint8_t)(rd8(ebx + 0x1b3u) + 1u));
    }
L_1021c296: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t10 = cow_thiscall(g, COW_IMG(0x1021c5b0u), self, 3, arg1, edi, ebx);
    t11 = g->edx;
    if (ebx == 0u)
    {
        eax = t10;
        edx = t11;
    }
    else
    {
        eax = t10;
        edx = t11;
        wr8(ebx + 0x1b3u, (uint8_t)(rd8(ebx + 0x1b3u) - 1u));
    }
L_1021c2aa: ;
    t12 = (eax & 0xffff0000u) | rd16(arg1);
    g->edx = edx;
    t13 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x1021d380u), t13 + 0x6cu, 2, t12, edi);
    t15 = g->edx;
    if ((uint8_t)t14 == 1u)
    {
        eax = t14;
        edx = t15;
    }
    else
    {
        eax = t14;
        edx = t15;
        ebx = t13;
        if (rd16(ebx + 0x80u) == 0u)
        {
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t16 = cow_thiscall(g, COW_IMG(0x1021c680u), self, 1, edi);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
    }
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_1021c25c: ;
    if (rd16(arg1) == (uint16_t)ecx)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1);
        edx = in_edx;
        goto L_1021c2aa;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1);
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x1015bc40u), rd32(COW_IMG(0x10621808u)), 1, (uint16_t)eax);
    if (t6 == 0u)
    {
        ebx = t6;
    }
    else
    {
        ebx = t6;
        wr8(ebx + 0x1b3u, (uint8_t)(rd8(ebx + 0x1b3u) + 1u));
    }
    g->edx = rd32(sp0 + 8u);
    t7 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1021d270u), t7 + 0x6cu, 0);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x1021c680u), self, 1, edi);
    t9 = g->edx;
    edx = t9;
    goto L_1021c296;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c210(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c210(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
