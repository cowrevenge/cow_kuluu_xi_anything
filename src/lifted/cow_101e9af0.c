/* f_0x101e9af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101e9af0(Guest* g)
{
    double d12;
    double d13;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    uint32_t loc_24;
    double loc_2c_f;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        loc_4 = self;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        t4 = rd32(rd32(eax) + 0x98u);
        if ((int32_t)rd32(sp0 + 0xcu) < 200)
        {
            esi = rd32(rd32(eax) + 0x184u);
            eax = rd32(sp0 + 0xcu);
            loc_4 = t4;
            if ((int32_t)eax < 100)
            {
                d13 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a18u)));
                eax = arg1 + 4u;
                edx = arg2 + 1u;
                loc_1c = 0u;
                loc_24 = 0x800060b0u;
                loc_2c_f = d13;
            }
            else
            {
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, arg1 + 4u, arg2 + 1u, 0x3f800000u, 0x3f800000u, 0x800060b0u, 0u, 0u, 0u);
                t10 = cow_divs(g, rd32(sp0 + 0xcu) - 0x64u, 0x65u);
                t11 = cow_mods(g, rd32(sp0 + 0xcu) - 0x64u, 0x65u);
                wr32(sp0 + 0xcu, t11);
                d12 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a18u)));
                eax = t10;
                edx = t11;
                loc_1c = 0u;
                loc_24 = 0x80808080u;
                loc_2c_f = d12;
            }
        }
        else
        {
            esi = rd32(rd32(eax) + 0x184u);
            eax = rd32(sp0 + 0xcu);
            loc_4 = t4;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t5 = cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, arg1 + 4u, arg2 + 1u, 0x3f800000u, 0x3f800000u, 0x800060b0u, 0u, 0u, 0u);
            t6 = g->edx;
            cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, arg1 + 4u, arg2 + 1u, 0x3f800000u, 0x3f800000u, 0x80808080u, 0u, 0u, 0u);
            t7 = cow_divs(g, rd32(sp0 + 0xcu) - 0x64u, 0x65u);
            t8 = cow_mods(g, rd32(sp0 + 0xcu) - 0x64u, 0x65u);
            wr32(sp0 + 0xcu, t8);
            d9 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(COW_IMG(0x10329a18u)));
            eax = t7;
            edx = t8;
            loc_1c = 8u;
            loc_24 = 0x80707000u;
            loc_2c_f = d9;
        }
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t14 = cow_thiscall(g, COW_IMG(0x1011fc80u), esi, 8, arg1 + 4u, arg2 + 1u, cow_f2bits(loc_2c_f), 0x3f800000u, loc_24, 0u, loc_1c, 0u);
        t15 = g->edx;
        cow_thiscall(g, COW_IMG(0x1011fb60u), loc_4, 5, arg1, arg2, 0x80808080u, 0u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e9af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e9af0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
