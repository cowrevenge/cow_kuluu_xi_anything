/* f_0x101ae8e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ae8e0(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 1048u);

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x400u;
    t2 = cow_thiscall(g, COW_IMG(0x101b5cb0u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t4;
        wr16(COW_IMG(0x10662c38u), 0u);
    }
    else
    {
        eax = t2;
        ecx = t3;
        edx = t4;
        if (rd16(COW_IMG(0x1037ade4u)) != 1u)
        {
            wr16(COW_IMG(0x10662c38u), 0u);
        }
        else
        {
            wr16(COW_IMG(0x10662c38u), (uint16_t)(rd16(COW_IMG(0x10662c38u)) + 1u));
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x400u;
        t5 = cow_stdcall(g, COW_IMG(0x101ae600u), 0);
        t6 = g->edx;
        cow_fastcall(g, COW_IMG(0x101b5800u), rd32(COW_IMG(0x10662d40u)), t6, 0);
        t7 = g->edx;
        edx = t7;
    }
    t8 = (uint16_t)rd32(COW_IMG(0x10662c38u));
    wr32(sp0 - 0x404u, t8);
    g->eax = t8;
    g->edx = edx;
    g->esp = sp0 - 0x400u;
    t9 = cow_thiscall(g, COW_IMG(0x1018dc70u), rd32(COW_IMG(0x1066268cu)), 1, t8);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t9;
        edx = t10;
        goto L_101ae96d;
    }
    eax = t9;
    ecx = t9;
    edx = t10;
    if (rd8(ecx) == 0u) goto L_101ae96d;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x400u;
    t11 = cow_stdcall(g, COW_IMG(0x101ae5e0u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0x404u, t11);
    wr32(sp0 - 0x408u, t12);
    wr32(sp0 - 0x40cu, COW_IMG(0x1036f9b0u));
    wr32(sp0 - 0x410u, COW_IMG(0x1037ae48u));
    wr32(sp0 - 0x414u, sp0 - 0x400u);
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x1037ae48u), COW_IMG(0x1036f9b0u), t12, t11);
L_101ae98a: ;
    wr32(sp0 - 0x404u, sp0 - 0x400u);
    g->eax = rd32(rd32(COW_IMG(0x10662d40u)));
    g->edx = sp0 - 0x400u;
    t16 = rd32(rd32(COW_IMG(0x10662d40u)));
    t17 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x400u;
    t18 = cow_thiscall(g, rd32(t16 + 0x24u), t17, 1, sp0 - 0x400u);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    cow_stdcall(g, COW_IMG(0x101ae5f0u), 0);
    t21 = g->edx;
    g->edx = t21;
    return 1u;
L_101ae96d: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x400u;
    t14 = cow_stdcall(g, COW_IMG(0x101ae5e0u), 0);
    t15 = g->ecx;
    wr32(sp0 - 0x404u, t14);
    wr32(sp0 - 0x408u, COW_IMG(0x1036f9b0u));
    wr32(sp0 - 0x40cu, COW_IMG(0x10358098u));
    wr32(sp0 - 0x410u, sp0 - 0x400u);
    g->esp = sp0 - 0x3fcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x400u, COW_IMG(0x10358098u), COW_IMG(0x1036f9b0u), t14, rd32(sp0 - 0x400u));
    goto L_101ae98a;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae8e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ae8e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
