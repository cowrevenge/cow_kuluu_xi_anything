/* f_0x10064cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10064cd0(Guest* g)
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
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 1576u);

    wr32(sp0 - 0x614u, in_ebx);
    wr32(sp0 - 0x618u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x618u;
    cow_thiscall(g, COW_IMG(0x1006b7a0u), sp0 - 0x610u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x61cu, 0x1000u);
    wr32(sp0 - 0x620u, 1u);
    wr32(sp0 - 0x624u, arg1);
    t2 = cow_fastcall(g, COW_IMG(0x1006b7c0u), sp0 - 0x610u, t1, 3, arg1, 1u, 0x1000u);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        edx = t4;
        goto L_10064d23;
    }
    ecx = t3;
    edx = t4;
    wr32(sp0 - 0x61cu, arg1);
    wr32(sp0 - 0x620u, COW_IMG(0x10353ad8u));
    g->ebx = self;
    g->esp = sp0 - 0x618u;
    t5 = cow_call_regs(g, COW_IMG(0x10313cefu), g->eax, ecx, edx, 1, 2, COW_IMG(0x10353ad8u), arg1);
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x1006b7b0u), sp0 - 0x610u, t6, 0);
    g->ebx = in_ebx;
    return t7 & 0xffffff00u;
L_10064d23: ;
    g->edx = edx;
    g->esp = sp0 - 0x618u;
    cow_thiscall(g, COW_IMG(0x10067e50u), sp0 - 0x604u, 0);
    t8 = g->edx;
    wr32(sp0 - 0x61cu, 0u);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x610u, 1, 0u);
    t10 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        edx = t10;
        edi = in_edi;
    }
    else
    {
        edx = t10;
        wr32(sp0 - 0x61cu, in_edi);
L_10064d3c: ;
        t11 = rd32(sp0 - 0x60cu);
        wr32(sp0 - 0x620u, t11);
        g->eax = t11;
        g->esp = sp0 - 0x61cu;
        t12 = cow_fastcall(g, COW_IMG(0x10067e70u), sp0 - 0x604u, edx, 1, t11);
        t13 = g->edx;
        if (t12 == 0u)
        {
            edx = t13;
        }
        else
        {
            edx = t13;
            wr32(sp0 - 0x620u, 0u);
            g->esp = sp0 - 0x61cu;
            t14 = cow_thiscall(g, COW_IMG(0x10068050u), sp0 - 0x604u, 1, 0u);
            esi = t14;
            edi = COW_IMG(0x10353b70u);
            ecx = 8u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (!zf)
            {
                edx = 0u;
            }
            else
            {
                t15 = rd32(sp0 - 0x60cu) + 7u;
                wr32(sp0 - 0x620u, t15);
                g->edx = 0u;
                g->esp = sp0 - 0x61cu;
                cow_thiscall(g, COW_IMG(0x10065250u), self, 1, t15);
                t16 = g->edx;
                edx = t16;
            }
        }
        wr32(sp0 - 0x620u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x61cu;
        t17 = cow_thiscall(g, COW_IMG(0x1006b850u), sp0 - 0x610u, 1, 0u);
        t18 = g->edx;
        if (t17 != 0u)
        {
            edx = t18;
            goto L_10064d3c;
        }
        eax = t17;
        edx = t18;
        edi = rd32(sp0 - 0x61cu);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x618u;
    t19 = cow_stdcall(g, COW_IMG(0x10067e60u), 0);
    t20 = g->edx;
    g->edi = edi;
    t21 = cow_fastcall(g, COW_IMG(0x1006b7b0u), sp0 - 0x610u, t20, 0);
    g->ebx = rd32(sp0 - 0x614u);
    g->esi = rd32(sp0 - 0x618u);
    g->edi = edi;
    return (t21 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10064cd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10064cd0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
