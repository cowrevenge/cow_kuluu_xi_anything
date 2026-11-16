/* f_0x1028a2f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1028a2f0(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = arg1;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    if (rd8(arg1 + ~ecx - 2u) != 0x2fu)
    {
        ecx = ~ecx - 1u;
        goto L_1028a30c;
    }
    g->edx = arg1;
    return 0u;
L_1028a30c: ;
    g->edx = arg1;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1028a600u), ecx, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        edi = 0u;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = t1;
        g->ecx = ecx;
        g->esp = sp0 - 0xcu;
        t4 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, edx, 1, 2, ebx, COW_IMG(0x10354054u));
        t5 = g->ecx;
        t6 = g->edx;
        if (t4 == ebx)
        {
            ecx = t5;
            edx = t6;
            edi = 0u;
        }
        else
        {
            ecx = t5;
            edx = t6;
            esi = t4;
            edi = esi;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            g->ecx = ~ecx;
            g->esp = sp0 - 0xcu;
            t7 = cow_cdecl(g, COW_IMG(0x10275da0u), 4, 1u, ~ecx, COW_IMG(0x103b979cu), 0xd2u);
            t8 = g->ecx;
            eax = esi;
            ecx = t8;
            edx = t7 - esi;
            edi = t7;
L_1028a35b: ;
            t9 = rd8(eax);
            wr8(eax + edx, (uint8_t)t9);
            if ((uint8_t)t9 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t9;
                goto L_1028a35b;
            }
            ecx = (ecx & 0xffffff00u) | t9;
        }
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, ebx, COW_IMG(0x103b979cu), 0xd6u);
        t10 = g->edx;
        edx = t10;
    }
    g->edx = edx;
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028a2f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028a2f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
