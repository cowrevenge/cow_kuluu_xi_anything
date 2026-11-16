/* f_0x100e57c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e57c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e58f6;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (rd32(eax + 0x19d4cu) == 0u)
    {
        ecx = rd32(eax + 0x19d4cu);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_stdcall(g, COW_IMG(0x100f0630u), 0);
        t2 = g->edx;
        if (t1 != 0u)
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            edx = t2;
            g->ecx = eax + 0x19d50u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100e3340u), 3, eax + 0x19dd0u, eax + 0x19d50u, 0x80u);
            t7 = g->ecx;
            t8 = g->edx;
            ecx = t7;
            edx = t8;
        }
        else
        {
            eax = rd32(COW_IMG(0x104dfd98u));
            wr32(eax + 0x19dd0u, 0u);
            edi = rd32(COW_IMG(0x104dfd98u)) + 0x19d50u;
            eax = 0u;
            ecx = 0x20u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t3 = rd32(COW_IMG(0x104dfd98u)) + 0x19d50u;
            t4 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd0u);
            g->ecx = t3;
            g->edx = t4;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x100e32d0u), 2, t4, t3);
            t5 = g->ecx;
            t6 = g->edx;
            ecx = t5;
            edx = t6;
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t9 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xe0u, 0u, 0u);
        t10 = g->ecx;
        t11 = g->edx;
        if (t9 == 0u)
        {
            ecx = t10;
            edx = t11;
        }
        else
        {
            ebx = t9;
            t12 = rd32(COW_IMG(0x104dfd98u));
            esi = rd32(COW_IMG(0x104dfd98u)) + 0x19d50u;
            edi = ebx + 4u;
            ecx = 0x20u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            t13 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x19dd0u);
            t14 = rd32(COW_IMG(0x104dfd98u));
            wr32(ebx + 0x94u, t13);
            g->eax = t14;
            g->ecx = t13;
            g->edx = t12;
            g->esp = sp0 - 0xcu;
            t15 = cow_stdcall(g, COW_IMG(0x100e3220u), 0);
            t16 = g->ecx;
            t17 = g->edx;
            wr32(ebx + 0x84u, t15);
            wr32(ebx + 0x88u, 0u);
            g->ecx = t16;
            g->edx = t17;
            t18 = cow_call_regs(g, COW_IMG(0x10312090u), ebx + 0x88u, g->ecx, g->edx, 1, 3, ebx + 0x88u, COW_IMG(0x10361e0cu), 4u);
            t19 = g->ecx;
            t20 = g->edx;
            g->ecx = t19;
            g->edx = t20;
            g->esp = sp0 - 0x18u;
            t21 = cow_call_regs(g, COW_IMG(0x100e32c0u), t18, g->ecx, g->edx, 1, 0);
            t22 = g->ecx;
            t23 = g->edx;
            wr8(ebx + 0x8bu, (uint8_t)t21);
            g->ecx = t22;
            g->edx = t23;
            t24 = cow_stdcall(g, COW_IMG(0x100da530u), 0);
            t25 = g->ecx;
            t26 = g->edx;
            wr32(ebx + 0x8cu, t24);
            g->ecx = t25;
            g->edx = t26;
            t27 = cow_stdcall(g, COW_IMG(0x100da550u), 0);
            t28 = g->ecx;
            t29 = g->edx;
            wr32(ebx + 0x90u, t27);
            g->ecx = t28;
            g->edx = t29;
            cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ebx, 0x98u, 0u);
            t30 = g->ecx;
            t31 = g->edx;
            ecx = t30;
            edx = t31;
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_stdcall(g, COW_IMG(0x100f0610u), 0);
        t32 = g->ecx;
        t33 = g->edx;
        g->ecx = t32;
        t34 = cow_stdcall(g, COW_IMG(0x100f0630u), 0);
        t35 = g->ecx;
        t36 = rd32(COW_IMG(0x104dfd98u));
        wr32(t36 + 0x19d4cu, t34);
        t37 = cow_stdcall(g, COW_IMG(0x100fc7f0u), 0);
        eax = t37;
    }
    return (eax & 0xffffff00u) | 1u;
L_100e58f6: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e57c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e57c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
