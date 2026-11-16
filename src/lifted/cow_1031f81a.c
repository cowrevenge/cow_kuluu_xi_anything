/* f_0x1031f81a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=5 */
void cow_fn_1031f81a(Guest* g)
{
    double d10;
    double d11;
    double d13;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
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
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, arg7);
    wr32(sp0 - 0x64u, sp0 + 0x14u);
    wr32(sp0 - 0x68u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031fc0au), self, 3, arg1, sp0 + 0x14u, arg7);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        t4 = rd32(sp0 - 0x24u) & 0xfffffffeu;
        wr32(sp0 - 0x24u, t4);
        wr32(sp0 - 0x60u, sp0 + 0x14u);
        wr32(sp0 - 0x64u, sp0 + 0xcu);
        wr32(sp0 - 0x68u, arg2);
        wr32(sp0 - 0x6cu, arg1);
        wr32(sp0 - 0x70u, sp0 + 0x1cu);
        wr32(sp0 - 0x74u, sp0 - 0x5cu);
        g->eax = sp0 - 0x5cu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t5 = cow_cdecl(g, COW_IMG(0x1031f957u), 6, sp0 - 0x5cu, sp0 + 0x1cu, arg1, arg2, sp0 + 0xcu, sp0 + 0x14u);
        t6 = g->ecx;
        t7 = g->edx;
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    wr32(sp0 - 0x60u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t8 = cow_call_regs(g, COW_IMG(0x1031fef6u), eax, g->ecx, g->edx, 1, 1, arg1);
    t9 = g->edx;
    if (rd32(COW_IMG(0x103d3810u)) != 0u)
    {
        eax = t8;
        edx = t9;
        goto L_1031f896;
    }
    eax = t8;
    edx = t9;
    if (eax == 0u) goto L_1031f896;
    wr32(sp0 - 0x60u, arg7);
    wr32(sp0 - 0x64u, arg1);
    wr32(sp0 - 0x68u, arg1);
    d10 = rdf64(sp0 + 0x14u);
    wrf64(sp0 - 0x68u, d10);
    wr32(sp0 - 0x6cu, arg1);
    wr32(sp0 - 0x70u, arg1);
    wrf64(sp0 - 0x70u, 0.0);
    wr32(sp0 - 0x74u, arg1);
    wr32(sp0 - 0x78u, arg1);
    d11 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x78u, d11);
    wr32(sp0 - 0x7cu, arg2);
    wr32(sp0 - 0x80u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x1031fe21u), 9, eax, arg2, cow_dlo(d11), cow_dhi(d11), cow_dlo(0.0), cow_dhi(0.0), cow_dlo(d10), cow_dhi(d10), arg7);
    t12 = g->edx;
    d13 = cow_take_float(g);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t12;
    fpush(g, d13);
    return;
L_1031f896: ;
    wr32(sp0 - 0x60u, eax);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x1031fea9u), 1, eax);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x60u, 0xffffu);
    wr32(sp0 - 0x64u, arg7);
    g->edx = t15;
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), t14, 4, arg7, 0xffffu, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    t16 = g->edx;
    g->ebp = rd32(sp0 - 4u);
    g->edx = t16;
    fpush(g, rdf64(sp0 + 0x14u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f81a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031f81a(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
