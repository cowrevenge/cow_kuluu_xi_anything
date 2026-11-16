/* f_0x1014f350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014f350(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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

    if ((uint8_t)arg1 == 0u) goto L_1014f416;
    if ((uint8_t)arg1 != 1u)
    {
        eax = (uint8_t)arg1 - 1u;
        edx = in_edx;
        goto L_1014f454;
    }
    wr8(rd32(self + 8u) + 0x85u, 1u);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x74u, rd8(rd32(COW_IMG(0x1057876cu)) + 0x74u) | 1u);
    t1 = rd32(COW_IMG(0x10578470u));
    wr32(t1 + 0x18u, 0u);
    if ((uint32_t)(int8_t)rd8(self + 0x14u) == 1u)
    {
        edx = t1;
        goto L_1014f3cd;
    }
    eax = (uint32_t)(int8_t)rd8(self + 0x14u) - 1u;
    edx = t1;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_1014f454;
    }
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        ecx = self;
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x11u);
        t3 = g->edx;
        g->edx = t3;
        t4 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10150cc0u), t4, 2, t2, 2u);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        goto L_1014f454;
    }
    eax = rd32(COW_IMG(0x105781f8u));
    loc_8 = 0x35u;
L_1014f3fd: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, loc_8);
    t13 = g->edx;
    g->edx = t13;
    g->esp = sp0;
    t14 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t12, 2u);
    t15 = g->edx;
    g->edx = t15;
    return t14;
L_1014f3cd: ;
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        ecx = self;
    }
    else
    {
        eax = rd32(COW_IMG(0x1057847cu));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x10u);
        t8 = g->edx;
        g->edx = t8;
        t9 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x10150cc0u), t9, 2, t7, 2u);
        t10 = g->ecx;
        t11 = g->edx;
        ecx = t10;
        edx = t11;
    }
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        goto L_1014f454;
    }
    eax = rd32(COW_IMG(0x105781f8u));
    loc_8 = 0x34u;
    goto L_1014f3fd;
L_1014f416: ;
    wr8(rd32(self + 8u) + 0x85u, 0u);
    t16 = rd32(COW_IMG(0x1057876cu));
    wr8(t16 + 0x74u, rd8(t16 + 0x74u) & 0xfeu);
    if (rd32(COW_IMG(0x1057847cu)) == 0u)
    {
        eax = t16;
        edx = in_edx;
    }
    else
    {
        eax = t16;
        ecx = rd32(COW_IMG(0x1057847cu));
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0;
        t17 = cow_thiscall(g, COW_IMG(0x10150cc0u), ecx, 2, 0u, 2u);
        t18 = g->edx;
        eax = t17;
        edx = t18;
    }
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x105781f8u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t19 = cow_thiscall(g, COW_IMG(0x1013a320u), ecx, 2, 0u, 2u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
L_1014f454: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014f350(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
