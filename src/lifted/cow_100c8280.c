/* f_0x100c8280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100c8280(Guest* g)
{
    double d25;
    double d26;
    double d27;
    uint32_t eax;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x78u;
    t1 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 0x7cu, t1);
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t1);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t4;
        goto L_100c82af;
    }
    edx = t4;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t5 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t6 = g->edx;
    wr32(sp0 - 0x7cu, t5);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t5);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        goto L_100c83b3;
    }
    edx = t8;
L_100c82af: ;
    wr32(sp0 - 0x70u, 0x3f8ccccdu);
    wr32(sp0 - 0x6cu, 0xbf800000u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x60u, 0x3f4ccccdu);
    wr32(sp0 - 0x5cu, 0xbf800000u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x3f800000u);
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t9 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t10 = g->edx;
    g->edx = t10;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x40u, 0);
    t11 = g->edx;
    t12 = rd32(self + 0x61cu);
    wr32(sp0 - 0x7cu, t12);
    g->eax = t12;
    g->edx = t11;
    t13 = cow_thiscall(g, COW_IMG(0x10027b80u), sp0 - 0x40u, 1, t12);
    t14 = g->edx;
    t15 = rd32(self + 0x620u);
    wr32(sp0 - 0x7cu, t15);
    t16 = cow_thiscall(g, COW_IMG(0x10027bd0u), sp0 - 0x40u, 1, t15);
    t17 = rd32(self + 0x624u);
    wr32(sp0 - 0x7cu, t17);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10027c20u), sp0 - 0x40u, 1, t17);
    t19 = g->edx;
    wr32(sp0 - 0x7cu, self + 0x5fcu);
    g->edx = t19;
    cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x40u, 1, self + 0x5fcu);
    t20 = g->edx;
    wr32(sp0 - 0x7cu, sp0 - 0x70u);
    g->eax = sp0 - 0x70u;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x70u);
    t22 = g->edx;
    wr32(sp0 - 0x7cu, sp0 - 0x60u);
    cow_thiscall(g, COW_IMG(0x10028200u), sp0 - 0x40u, 1, sp0 - 0x60u);
    wr32(sp0 - 0x7cu, sp0 - 0x50u);
    wr32(sp0 - 0x80u, sp0 - 0x60u);
    wr32(sp0 - 0x84u, sp0 - 0x70u);
    g->eax = sp0 - 0x60u;
    g->edx = sp0 - 0x50u;
    t23 = cow_thiscall(g, COW_IMG(0x10181590u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x70u, sp0 - 0x60u, sp0 - 0x50u);
    t24 = g->edx;
    if ((uint8_t)t23 == 0u)
    {
        eax = t23;
        edx = t24;
        goto L_100c83ae;
    }
    eax = t23;
    edx = t24;
    d25 = fr(g, fr(g, (double)rdf32(sp0 - 0x50u) - cow_bits2f(0x3f8ccccdu)) + (double)rdf32(self + 0x5fcu));
    d26 = fr(g, (double)rdf32(sp0 - 0x48u) - cow_bits2f(0u));
    wrf32(self + 0x5fcu, (float)d25);
    d27 = fr(g, d26 + (double)rdf32(self + 0x604u));
    wrf32(self + 0x604u, (float)d27);
    g->eax = eax;
    g->esp = sp0 - 0x78u;
    t28 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    return t28 & 0xffffff00u;
L_100c83ae: ;
    g->eax = eax;
    g->esp = sp0 - 0x78u;
    t29 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    eax = t29;
L_100c83b3: ;
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100c8280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100c8280(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
