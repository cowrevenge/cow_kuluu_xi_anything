/* f_0x102750b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102750b0(Guest* g)
{
    double d14;
    double d16;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    int64_t q13;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102750bcu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_102750bc;
    case 0x102750c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102750c7;
    case 0x102750cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102750cb;
    case 0x102750dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102750df;
    case 0x102750e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102750e9;
    case 0x102750ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102750ec;
    case 0x102750f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_102750f7;
    case 0x1027510au: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1027510a;
    case 0x10275115u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10275115;
    case 0x1027514bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1027514b;
    default: break;
    }
#endif

    COW_AT(102750b0)
    if (rd32(COW_IMG(0x103b27e8u)) == 0u) goto L_1027510a;
    eax = rd32(COW_IMG(0x103b27e8u));
    COW_AT(102750bc)
    wr32(sp0 - 0x10u, COW_IMG(0x1099cee0u));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103292ecu)), 1, COW_IMG(0x1099cee0u));   /* kernel32.dll!QueryPerformanceFrequency */
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102750c7)
    if (eax == 0u)
    {
    COW_AT(102750cb)
        wr32(sp0 - 0x10u, 0xcdu);
        wr32(sp0 - 0x14u, COW_IMG(0x103b2818u));
        wr32(sp0 - 0x18u, COW_IMG(0x103b27fcu));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103b2818u));
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    COW_AT(102750df)
        wr32(sp0 - 0x1cu, COW_IMG(0x103b27ecu));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27ecu), COW_IMG(0x103b27fcu));
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    COW_AT(102750e9)
    }
    COW_AT(102750ec)
    wr32(sp0 - 0x10u, COW_IMG(0x1099cee8u));
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x103291acu)), 1, COW_IMG(0x1099cee8u));   /* kernel32.dll!QueryPerformanceCounter */
    COW_AT(102750f7)
    t10 = rd32(COW_IMG(0x1099cef0u));
    wr32(COW_IMG(0x103b27e8u), 0u);
    return t10;
L_1027510a: ;
    COW_AT(1027510a)
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, rd32(COW_IMG(0x103291acu)), 1, sp0 - 8u);   /* kernel32.dll!QueryPerformanceCounter */
    COW_AT(10275115)
    t11 = rd32(sp0 - 8u);
    t12 = rd32(COW_IMG(0x1099cee8u));
    q13 = (int64_t)rd64(COW_IMG(0x1099cee0u));
    wr32(COW_IMG(0x1099cee8u), t11);
    d14 = fr(g, (double)rdf32(COW_IMG(0x10340b14u)) / (double)(int64_t)q13);
    wr32(sp0 - 0xcu, t11 - t12);
    t15 = rd32(sp0 - 4u);
    wr32(COW_IMG(0x1099ceecu), t15);
    d16 = fr(g, d14 * (double)(int32_t)(t11 - t12));
    fpush(g, d16);
    g->esp = sp0 - 0xcu;
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t11, g->ecx, g->edx, 1, 0);
    eax = t17;
    COW_AT(1027514b)
    t18 = eax + rd32(COW_IMG(0x1099cef0u));
    wr32(COW_IMG(0x1099cef0u), t18);
    return t18;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102750b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102750bcu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102750c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102750cbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102750dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x18u;
        wr32(sp0 - 0x18u, COW_IMG(0x103b27fcu));
        (void)sp0;
        return 1;
    }
    case 0x102750e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x1cu;
        (void)sp0;
        return 1;
    }
    case 0x102750ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102750f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1027510au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10275115u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1027514bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 0x10u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102750b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102750b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
