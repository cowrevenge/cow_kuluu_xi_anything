/* f_0x1029b270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1029b270(Guest* g)
{
    double d11;
    double d7;
    double d8;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 204u);

    wr32(sp0 - 0x9cu, in_esi);
    wr32(sp0 - 0xa0u, in_edi);
    if (rd32(arg1 + 0x2cu) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(arg1 + 0x2cu);
        t1 = rd32(arg1 + 0x20u) + 1u;
        t2 = rd32(arg1 + 0x1cu);
        wr32(arg1 + 0x20u, t1);
        if (t1 != t2)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            t3 = rd32(arg1 + 0x28u);
            wr32(sp0 - 0xa4u, t3);
            wr32(sp0 - 0xa8u, sp0 - 0x40u);
            t4 = rd32(rd32(ecx + 0x18u) + rd32(ecx + 0x1cu) * 0xcu + 4u);
            g->esp = sp0 - 0xa0u;
            t5 = cow_cdecl(g, COW_IMG(0x1027f100u), 2, sp0 - 0x40u, t3);
            wr32(sp0 - 0xacu, sp0 - 0x40u);
            wr32(sp0 - 0xb0u, t4);
            wr32(sp0 - 0xb4u, sp0 - 0x80u);
            g->esp = sp0 - 0xa8u;
            cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x80u, t4, sp0 - 0x40u);
            t6 = rd32(sp0 - 0x74u);
            wr32(sp0 - 0x98u, t6);
            d7 = (double)(float)-(double)rdf32(sp0 - 0x78u);
            wrf32(sp0 - 0x8cu, (float)d7);
            d8 = (double)(float)-(double)rdf32(sp0 - 0x68u);
            wrf32(sp0 - 0x88u, (float)d8);
            t9 = rd32(sp0 - 0x64u);
            wr32(sp0 - 0x94u, t9);
            t10 = rd32(sp0 - 0x54u);
            wr32(sp0 - 0x90u, t10);
            wr32(sp0 - 0xb8u, arg1 + 0x38u);
            wr32(sp0 - 0xbcu, sp0 - 0x8cu);
            wr32(sp0 - 0xc0u, sp0 - 0x98u);
            d11 = (double)(float)-(double)rdf32(sp0 - 0x58u);
            wrf32(sp0 - 0x84u, (float)d11);
            t12 = rd32(arg1 + 0x34u);
            wr32(sp0 - 0xc4u, t12);
            t13 = rd32(arg1 + 0x24u);
            wr32(sp0 - 0xc8u, t13);
            g->eax = t12;
            g->edx = sp0 - 0x98u;
            g->esp = sp0 - 0xb4u;
            t14 = cow_thiscall_cdecl(g, COW_IMG(0x102ac560u), t13, 5, t13, t12, sp0 - 0x98u, sp0 - 0x8cu, arg1 + 0x38u);
            t15 = g->edx;
            wr32(arg1 + 0x20u, 0u);
            eax = t14;
            edx = t15;
        }
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029b270(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029b270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
