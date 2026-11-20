/* f_0x102e71e7 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Opens a file from a wide string, converting it to ANSI on non-NT platforms, and stores the handle in *this.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102e71e7(Guest* g, uint32_t self, uint32_t lpWideFileName, uint32_t param3)
{
    if (lpWideFileName == 0u)
    {
        return 0x8876086cu;
    }

    uint32_t fileName = lpWideFileName;
    uint32_t localThis = self;

    if (param3 != 0u)
    {
        const uint32_t osvi = cow_frame(g, g->esp, 0x9cu);
        wr32(osvi, 0x94u);

        cow_stdcall(g, rd32(COW_IMG(0x103291a8u)), 1u, osvi);

        if (rd32(osvi + 0x10u) != 2u)
        {
            const uint32_t wtm = rd32(COW_IMG(0x10329154u));

            const uint32_t cbMultiByte = cow_stdcall(
                g,
                wtm,
                8u,
                0u,
                0u,
                lpWideFileName,
                (uint32_t)-1,
                0u,
                0u,
                0u,
                0u
            );

            const uint32_t aligned = (cbMultiByte + 3u) & 0xfffffffcu;
            cow_cdecl(g, COW_IMG(0x10312190u), 1u, aligned);

            const uint32_t ansiBuf = cow_frame(g, g->esp, 0x10cu);

            cow_stdcall(
                g,
                wtm,
                8u,
                0u,
                0u,
                lpWideFileName,
                (uint32_t)-1,
                ansiBuf,
                cbMultiByte,
                0u,
                0u
            );

            fileName = ansiBuf;
            param3 = 0u;
        }

        if (param3 != 0u)
        {
            const uint32_t handle = cow_stdcall(
                g,
                rd32(COW_IMG(0x1032924cu)),
                7u,
                fileName,
                0x40000000u,
                0u,
                0u,
                2u,
                0u,
                0u
            );

            wr32(localThis, handle);

            if (handle == 0xffffffffu)
            {
                cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0u);
                return 0x88760b59u;
            }

            return 0u;
        }
    }

    const uint32_t handle = cow_stdcall(
        g,
        rd32(COW_IMG(0x103291ecu)),
        7u,
        fileName,
        0x40000000u,
        0u,
        0u,
        2u,
        0u,
        0u
    );

    wr32(localThis, handle);

    if (handle == 0xffffffffu)
    {
        cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0u);
        return 0x88760b59u;
    }

    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102e71e7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102e71e7(
        g,
        g->ecx,
        rd32(sp0 + 4u),
        rd32(sp0 + 8u)
    );
    g->esp = sp0;
    rt_return(g, result, 8u);
}
/* COW_ADAPTER END */
