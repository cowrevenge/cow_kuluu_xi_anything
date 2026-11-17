/* f_0x102821b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102821b0(Guest* g)
{
    double d1;
    double d13;
    double d14;
    double d2;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x89cu, arg1);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u) != rd32(rd32(COW_IMG(0x1099d200u)) + 0x8acu))
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u);
        ecx = rd32(COW_IMG(0x1099d200u));
        edx = eax * 5u;
        ebx = rd32(COW_IMG(0x1099d63cu) + eax * 0x28u);
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a0u);
        ecx = rd32(COW_IMG(0x1099d200u));
        edx = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8acu);
        ebx = rd32(ecx + 0x900u);
    }
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        wr32(sp0 - 0xcu, 0x3f800000u);
        wr32(sp0 - 0x10u, 0x3f800000u);
    }
    else
    {
        d1 = (double)(float)fr(g, (double)(int32_t)rd32(ecx + 0x2d8u) / (double)(int32_t)rd32(COW_IMG(0x1099d620u) + arg1 * 0x28u));
        wrf32(sp0 - 0xcu, (float)d1);
        d2 = (double)(float)fr(g, (double)(int32_t)rd32(ecx + 0x2d4u) / (double)(int32_t)rd32(COW_IMG(0x1099d61cu) + arg1 * 0x28u));
        wrf32(sp0 - 0x10u, (float)d2);
        eax = arg1 * 0x28u;
    }
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102838c0u), 2, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    if (arg1 != rd32(rd32(COW_IMG(0x1099d200u)) + 0x8a8u))
    {
        wr32(sp0 - 0xcu, in_edi);
        if (rd32(COW_IMG(0x1099d63cu) + arg1 * 0x28u) != 0u)
        {
            edi = COW_IMG(0x1099d63cu) + arg1 * 0x28u;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1099d63cu) + arg1 * 0x28u);
            t7 = COW_IMG(0x1099d63cu) + arg1 * 0x28u;
            wr32(sp0 - 0x10u, t7);
            wr32(sp0 - 0x14u, 0u);
            t8 = rd32(COW_IMG(0x1099d638u) + arg1 * 0x28u);
            wr32(sp0 - 0x18u, t8);
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(rd32(t8) + 0x3cu), ecx, 3, t8, 0u, t7);
            edi = t7;
        }
        wr32(sp0 - 0x10u, ebx);
        wr32(sp0 - 0x14u, rd32(edi));
        wr32(sp0 - 0x18u, rd32(COW_IMG(0x1066941cu)));
        g->edx = rd32(edi);
        t9 = rd32(rd32(COW_IMG(0x1066941cu)));
        t10 = rd32(edi);
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, rd32(t9 + 0x7cu), t9, 3, rd32(COW_IMG(0x1066941cu)), t10, ebx);
        t11 = g->ecx;
        t12 = g->edx;
        ecx = t11;
        edx = t12;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1099d200u));
        wr32(sp0 - 0xcu, ebx);
        t3 = rd32(ecx + 0x8fcu);
        wr32(sp0 - 0x10u, t3);
        wr32(sp0 - 0x14u, rd32(COW_IMG(0x1066941cu)));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t4 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t4 + 0x7cu), t3, 3, rd32(COW_IMG(0x1066941cu)), t3, ebx);
        t5 = g->ecx;
        t6 = g->edx;
        ecx = t5;
        edx = t6;
    }
    d13 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x1099d620u) + arg1 * 0x28u);
    wrf32(sp0 - 0xcu, (float)d13);
    d14 = (double)(float)(double)(int32_t)rd32(COW_IMG(0x1099d61cu) + arg1 * 0x28u);
    wrf32(sp0 - 0x10u, (float)d14);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10283a30u), 4, 0u, 0u, cow_f2bits(d14), cow_f2bits(d13));
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102821b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102821b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
