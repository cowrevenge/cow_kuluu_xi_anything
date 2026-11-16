/* f_0x100fb830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100fb830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_esi);
    t1 = rd32(sp0 + 4u);
    wr32(COW_IMG(0x104dfd98u), t1);
    if (rd8(t1 + 0xcu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(t1 + 0xcu);
        goto L_100fb912;
    }
    eax = (in_eax & 0xffffff00u) | rd8(t1 + 0xcu);
    esi = t1;
    if ((uint8_t)eax <= 2u) goto L_100fb86a;
    if ((uint8_t)eax != 3u) goto L_100fb912;
    if (rd8(esi + 0xdu) != 0u) goto L_100fb912;
    wr32(sp0 - 8u, esi);
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x100fbb40u), 1, esi);
    return (t2 & 0xffffff00u) | 1u;
L_100fb86a: ;
    t3 = rd8(esi + 0x3c439u);
    wr32(sp0 + 4u, 0u);
    if ((uint8_t)t3 == 0u)
    {
        wr32(sp0 - 8u, sp0 + 4u);
        g->ecx = sp0 + 4u;
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10103700u), 1, sp0 + 4u);
        t11 = g->ecx;
        t12 = rd32(sp0 + 4u);
        wr32(sp0 - 0xcu, t12);
        wr32(sp0 - 0x10u, COW_IMG(0x10361e0cu));
        wr32(sp0 - 0x14u, esi + 0x3c3a4u);
        t13 = (t11 & 0xffffff00u) | rd8(esi + 0x3c404u);
        wr32(sp0 - 0x18u, t13);
        wr32(sp0 - 0x1cu, esi + 0x30c0u);
        wr32(sp0 - 0x20u, esi + 0x3c394u);
        t14 = rd32(esi + 0x3c390u);
        wr32(sp0 - 0x24u, t14);
        g->ecx = t14;
        g->edx = esi + 0x30c0u;
        g->esp = sp0 - 0xcu;
        t15 = cow_cdecl(g, COW_IMG(0x100fba40u), 6, t14, esi + 0x3c394u, esi + 0x30c0u, t13, esi + 0x3c3a4u, COW_IMG(0x10361e0cu));
        t16 = g->ecx;
        t17 = g->edx;
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    else
    {
        wr32(sp0 - 8u, sp0 + 4u);
        g->esp = sp0 - 4u;
        t4 = cow_cdecl(g, COW_IMG(0x10103700u), 1, sp0 + 4u);
        t5 = rd32(sp0 + 4u);
        wr32(sp0 - 0xcu, t5);
        wr32(sp0 - 0x10u, COW_IMG(0x10361e0cu));
        wr32(sp0 - 0x14u, esi + 0x3c3a4u);
        t6 = (t4 & 0xffffff00u) | rd8(esi + 0x3c404u);
        wr32(sp0 - 0x18u, t6);
        wr32(sp0 - 0x1cu, esi + 0x30c0u);
        wr32(sp0 - 0x20u, esi + 0x3c394u);
        t7 = rd32(esi + 0x3c390u);
        wr32(sp0 - 0x24u, t7);
        g->ecx = esi + 0x30c0u;
        g->edx = esi + 0x3c394u;
        g->esp = sp0 - 8u;
        t8 = cow_cdecl(g, COW_IMG(0x100fb920u), 7, t7, esi + 0x3c394u, esi + 0x30c0u, t6, esi + 0x3c3a4u, COW_IMG(0x10361e0cu), t5);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    if ((uint8_t)eax != 0u)
    {
        if (rd8(esi + 0xcu) == 1u)
        {
            wr8(esi + 0xcu, 2u);
            wr32(sp0 - 8u, esi + 0x41a8u);
            g->esp = sp0 - 4u;
            t18 = cow_cdecl(g, COW_IMG(0x100f91c0u), 1, esi + 0x41a8u);
            eax = t18;
        }
    }
L_100fb912: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fb830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fb830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
