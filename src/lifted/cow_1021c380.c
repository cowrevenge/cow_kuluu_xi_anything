/* f_0x1021c380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1021c380(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t in_ebp = g->ebp;

    if (rd32(self + 0x14u) == rd32(rd32(COW_IMG(0x104dfd98u)) + 0x198c8u))
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = self + 0x80u;
        ebx = self + 0x1224u;
        loc_c = rd32(sp0 - 0xcu) & 0xffffff00u;
        loc_8 = self + 0x80u;
L_1021c3b3: ;
        g->eax = rd32(self);
        g->edx = edx;
        t1 = rd32(self);
        g->esp = sp0 - 0x1cu;
        t2 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, t1, loc_c);
        t3 = g->edx;
        if (t2 == 0u)
        {
            eax = rd32(self);
            ecx = t2;
            edx = t3;
            ebp = loc_c;
            if (eax == 1u) goto L_1021c454;
            if (eax != 9u) goto L_1021c469;
L_1021c454: ;
            if (rd32(ebx) == 0u)
            {
                eax = rd32(ebx);
            }
            else
            {
                eax = rd32(ebx);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x1cu;
                t19 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
                t20 = g->ecx;
                wr32(ebx, 0u);
                eax = t19;
                ecx = t20;
            }
L_1021c469: ;
            if (rd16(loc_8) != 0u)
            {
                edx = loc_8;
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t21 = cow_thiscall(g, COW_IMG(0x1021c350u), self, 2, 0u, ebp);
                t22 = g->ecx;
                eax = t21;
                ecx = t22;
            }
        }
        else
        {
            eax = rd32(self);
            ecx = t2;
            edx = t3;
            ebp = loc_c;
            loc_4 = t2;
            if (eax == 1u) goto L_1021c3d9;
            if (eax != 9u) goto L_1021c431;
L_1021c3d9: ;
            g->ebp = ebp;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x100ebf80u), ecx, 3, eax, ebp, 0u);
            t5 = g->ecx;
            t6 = g->edx;
            if (t4 == 0u)
            {
                edx = t6;
            }
            else
            {
                ecx = t5;
                edx = t6;
                esi = t4;
                if (rd32(ebx) == 0u)
                {
                    eax = rd32(ebx);
                }
                else
                {
                    eax = rd32(ebx);
                    g->eax = eax;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0x1cu;
                    t7 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
                    t8 = g->ecx;
                    t9 = g->edx;
                    wr32(ebx, 0u);
                    eax = t7;
                    ecx = t8;
                    edx = t9;
                }
                if (rd8(esi) == 1u)
                {
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    t10 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x1cu, in_esi, in_ebp);
                    t11 = g->edx;
                    if (t10 == 0u)
                    {
                        edx = t11;
                        eax = 0u;
                    }
                    else
                    {
                        eax = t10;
                        edx = t11;
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 0x1cu;
                        t12 = cow_thiscall(g, COW_IMG(0x1021bc30u), eax, 1, esi);
                        t13 = g->edx;
                        eax = t12;
                        edx = t13;
                    }
                    wr32(ebx, eax);
                }
                g->ebp = ebp;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x100ec060u), 2, rd32(self), ebp);
                t14 = g->edx;
                edx = t14;
            }
            ecx = loc_4;
L_1021c431: ;
            if (rd32(self) != 0x11u)
            {
                eax = rd32(self);
                loc_20 = ebp;
                loc_24 = ecx;
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t17 = cow_thiscall(g, COW_IMG(0x1021c210u), self, 2, loc_24, loc_20);
                t18 = g->ecx;
                eax = t17;
                ecx = t18;
            }
            else
            {
                eax = rd32(self);
                loc_20 = ebp;
                loc_24 = ecx;
                g->eax = eax;
                g->esp = sp0 - 0x1cu;
                t15 = cow_thiscall(g, COW_IMG(0x1021c2e0u), self, 2, loc_24, loc_20);
                t16 = g->ecx;
                eax = t15;
                ecx = t16;
            }
        }
        if ((uint8_t)((uint8_t)loc_c + 1u) < 0x51u)
        {
            edx = loc_8 + 0x18u;
            ebx = ebx + 4u;
            loc_c = (loc_c & 0xffffff00u) | (uint8_t)((uint8_t)loc_c + 1u);
            loc_8 = loc_8 + 0x18u;
            goto L_1021c3b3;
        }
        edx = loc_8 + 0x18u;
        t23 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x198c8u);
        t24 = rd32(COW_IMG(0x104dfd98u));
        wr32(self + 0x14u, t23);
        eax = t24;
    }
    g->ebp = in_ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1021c380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1021c380(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
