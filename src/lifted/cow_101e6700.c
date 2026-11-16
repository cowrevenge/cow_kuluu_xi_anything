/* f_0x101e6700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e6700(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10663524u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1020a420u), t1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t4;
    }
    else
    {
        eax = t2;
        ecx = t3;
        edi = eax + 8u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t5 = ~ecx - 1u;
        edi = COW_IMG(0x1036f9b0u);
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0xffu);
        af = 0u;
        zf = 0u;
        sf = 1u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t6 = t5 + ~ecx + 3u;
        g->esp = sp0 - 4u;
        t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ~ecx - 1u, t5, 1, 3, t6, in_edi, in_ebx);
        t8 = g->ecx;
        t9 = g->edx;
        g->ebx = eax + 8u;
        g->esp = sp0 - 0xcu;
        t10 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t7, COW_IMG(0x1036f9a8u), COW_IMG(0x1036f9b0u), eax + 8u, t6);
        g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
        t11 = rd32(COW_IMG(0x10662d40u));
        t12 = rd32(rd32(COW_IMG(0x10662d40u)));
        t13 = cow_thiscall(g, rd32(t12 + 0x24u), t11, 1, t7);
        t14 = g->ecx;
        t15 = g->edx;
        if (t7 == 0u)
        {
            eax = t13;
            edx = t15;
        }
        else
        {
            eax = t13;
            ecx = t14;
            edx = t15;
            esi = t7;
            g->eax = eax;
            g->esp = sp0 - 4u;
            t16 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, esi);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
    }
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f3e4u));
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6700(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e6700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
