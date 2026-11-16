/* f_0x1031f8b2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=6 */
void cow_fn_1031f8b2(Guest* g)
{
    double d11;
    double d12;
    double d13;
    double d14;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 132u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x60u, arg9);
    wr32(sp0 - 0x64u, sp0 + 0x1cu);
    wr32(sp0 - 0x68u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1031fc0au), self, 3, arg1, sp0 + 0x1cu, arg9);
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
        t4 = (rd32(sp0 - 0x24u) & 0xffffff00u) | (rd32(sp0 - 0x24u) & 0xe3u) | 3u;
        wr32(sp0 - 0x24u, t4);
        wr32(sp0 - 0x60u, sp0 + 0x1cu);
        wr32(sp0 - 0x64u, sp0 + 0xcu);
        wr32(sp0 - 0x68u, arg2);
        wr32(sp0 - 0x6cu, arg1);
        d5 = rdf64(sp0 + 0x14u);
        wrf64(sp0 - 0x34u, d5);
        wr32(sp0 - 0x70u, sp0 + 0x24u);
        wr32(sp0 - 0x74u, sp0 - 0x5cu);
        g->eax = sp0 - 0x5cu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t6 = cow_cdecl(g, COW_IMG(0x1031f957u), 6, sp0 - 0x5cu, sp0 + 0x24u, arg1, arg2, sp0 + 0xcu, sp0 + 0x1cu);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    }
    wr32(sp0 - 0x60u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t9 = cow_call_regs(g, COW_IMG(0x1031fef6u), eax, g->ecx, g->edx, 1, 1, arg1);
    t10 = g->edx;
    if (rd32(COW_IMG(0x103d3810u)) != 0u)
    {
        eax = t9;
        edx = t10;
        goto L_1031f93b;
    }
    eax = t9;
    edx = t10;
    if (eax == 0u) goto L_1031f93b;
    wr32(sp0 - 0x60u, arg9);
    wr32(sp0 - 0x64u, arg1);
    wr32(sp0 - 0x68u, arg1);
    d11 = rdf64(sp0 + 0x1cu);
    wrf64(sp0 - 0x68u, d11);
    wr32(sp0 - 0x6cu, arg1);
    wr32(sp0 - 0x70u, arg1);
    d12 = rdf64(sp0 + 0x14u);
    wrf64(sp0 - 0x70u, d12);
    wr32(sp0 - 0x74u, arg1);
    wr32(sp0 - 0x78u, arg1);
    d13 = rdf64(sp0 + 0xcu);
    wrf64(sp0 - 0x78u, d13);
    wr32(sp0 - 0x7cu, arg2);
    wr32(sp0 - 0x80u, eax);
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x1031fe21u), 9, eax, arg2, cow_dlo(d13), cow_dhi(d13), cow_dlo(d12), cow_dhi(d12), cow_dlo(d11), cow_dhi(d11), arg9);
    d14 = cow_take_float(g);
    g->ebp = rd32(sp0 - 4u);
    fpush(g, d14);
    return;
L_1031f93b: ;
    wr32(sp0 - 0x60u, eax);
    g->ecx = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x1031fea9u), 1, eax);
    t15 = g->ecx;
    t16 = g->edx;
    wr32(sp0 - 0x60u, 0xffffu);
    wr32(sp0 - 0x64u, arg9);
    g->esp = sp0 - 0x54u;
    cow_thiscall_cdecl(g, COW_IMG(0x1031ff40u), t15, 4, arg9, 0xffffu, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
    g->ebp = rd32(sp0 - 4u);
    fpush(g, rdf64(sp0 + 0x1cu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f8b2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031f8b2(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
