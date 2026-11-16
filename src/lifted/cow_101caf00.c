/* f_0x101caf00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=10 */
uint32_t cow_fn_101caf00(Guest* g)
{
    uint32_t cf;
    double d13;
    double d2;
    double d4;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t3;
    uint32_t t5;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg5 != rd8(rd32(sp0 + 0x18u)))
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 0x18u));
        edi = rd32(sp0 + 0x18u);
        cf = (uint8_t)arg5 < rd8(rd32(sp0 + 0x18u));
        if (!cf)
        {
            wr32(sp0 + 0x18u, (uint8_t)eax);
            t5 = rd32(sp0 + 0x18u);
            wr32(sp0 + 0x18u, (uint8_t)arg5);
            d6 = (double)(float)fr(g, (double)(int32_t)t5 * (double)rdf32(COW_IMG(0x10329a18u)));
            loc_4_f = d6;
            x0 = (double)(int32_t)rd32(sp0 + 0x18u);
        }
        else
        {
            wr32(sp0 + 0x18u, (uint8_t)arg5);
            t3 = rd32(sp0 + 0x18u);
            wr32(sp0 + 0x18u, (uint8_t)eax);
            d4 = (double)(float)fr(g, (double)(int32_t)t3 * (double)rdf32(COW_IMG(0x10329a18u)));
            loc_4_f = d4;
            x0 = (double)(int32_t)rd32(sp0 + 0x18u);
        }
        d7 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a18u)));
        wrf32(sp0 + 0x18u, (float)d7);
    }
    else
    {
        edi = rd32(sp0 + 0x18u);
        wr32(sp0 + 0x18u, (uint8_t)arg5);
        t1 = rd32(sp0 + 0x18u);
        wr32(sp0 + 0x18u, 0u);
        d2 = (double)(float)fr(g, (double)(int32_t)t1 * (double)rdf32(COW_IMG(0x10329a18u)));
        loc_4_f = d2;
    }
    t8 = rd32(sp0 + 0x18u);
    g->edi = edi;
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 0x10u;
    t9 = cow_cdecl(g, COW_IMG(0x101cad00u), 10, arg1, arg2, arg3, arg4, cow_f2bits(loc_4_f), t8, arg7, arg8, arg9, arg10);
    t10 = g->edx;
    t11 = (in_ebx & 0xffffff00u) | rd8(edi);
    t12 = (uint8_t)arg5 - (uint8_t)t11;
    wr32(sp0 + 0x18u, t12);
    g->edx = t10;
    d13 = fr(g, (double)(int32_t)rd32(sp0 + 0x18u) * (double)rdf32(COW_IMG(0x1032ae5cu)));
    fpush(g, d13);
    t14 = cow_call_regs(g, COW_IMG(0x10311c6cu), t9, g->ecx, g->edx, 1, 0);
    t15 = g->edx;
    if (t14 == 0u)
    {
        eax = t14;
        edx = t15;
        goto L_101caff4;
    }
    eax = t14;
    ebx = t11;
    wr8(edi, (uint8_t)((uint8_t)eax + (uint8_t)ebx));
    g->edi = in_edi;
    return eax;
L_101caff4: ;
    wr8(edi, (uint8_t)arg5);
    g->edi = in_edi;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101caf00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101caf00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
